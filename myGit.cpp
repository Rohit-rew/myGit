#include <iostream>
#include <map>
#include "menu/menu.h"

using namespace std;


int main(int argc , char* argv[]){

    if(argc == 1 ){
        getHelpMenu();
        return 0;
    }

    const string argument1 =  argv[1];

    // all commands map
    map<string , int> comands;
    comands.insert(make_pair("status" , 1));
    comands.insert(make_pair("init" , 2));

    switch (comands[argument1])
    {
    case 1:
        getStatus();
        break;
    case 2:
        initRepo();
        break;
    default:
        getHelpMenu();
        break;
    }


    return 0;
}