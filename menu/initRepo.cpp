#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include "../lib/utils.h"
#include "menu.h"



using namespace std;

void createRepo();

void initRepo(){
    // check if it is a mygit repository.
    bool isValidRepo = isMyGitRepo();
    if(isValidRepo){
        // if already a git repo show user the warning;
        cout << "This repos is already a myGit repository"<<endl;
    }else{
        createRepo();
    }
    // if it is not a mygit repository then make it a mygit repo
}

void createRepo(){

    // create the mygit folder annd give r,w access to it
    const char* path = ".mygit";
    mkdir(path,S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

    // create gitignore file and info.json
    std::ofstream ignoreFle(".mygitignore");
    std::ofstream infoFile("./.mygit/info.json");

    // write data to json file.
    if(infoFile.is_open()){
        // string initData = loadJsonData() ;
        // infoFile << initData.dump(4);
    }else{
        cout << "could not load info.json file. Please re-initialize the repositpry";
    }

    ignoreFle.close();
    infoFile.close();    
    cout << "myGit initialized"<<endl;
}