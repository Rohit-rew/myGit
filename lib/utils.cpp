#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <ctime>
#include <chrono>
#include "utils.h"

using namespace std;

// this function tells if the existing repo is a mygit repo or not
bool isMyGitRepo(){
    fstream infoFile;
    infoFile.open("./.mygit/info.json" , std::ios::in);

    if(infoFile.is_open()){
        infoFile.close();
        return true;
    }else{
        return false;
    }
}


// loads the required field for info.json into an json object
nlohmann::json loadJsonData(){
    time_t currentTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    nlohmann::json initData;
    initData["repoName"] = "N/A";
    initData["createDate"] = currentTime;
    initData["repocode"] = "XYX-1288";
    return initData;
}