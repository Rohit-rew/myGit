#include <iostream>
#include "../lib/utils.h"
#include "menu.h"

using namespace std;


void getStatus(){
    // check if it is a git repository
    bool isValidRepo = isMyGitRepo();

    if(isValidRepo){
        cout << "index.html - 3 changes";
    }else{
        cout << "fatal : not a myGit repository or any of the parent directory\nUse 'mygit init' to create a repo'"<<endl;
    }

}