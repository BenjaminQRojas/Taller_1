#include <iostream>
#include <vector>
#include <string>
#include "include/include.h"
#include "logic/logic.h"

using namespace std;

int main()
{
    //listas softwares
    vector<Game> gameVector;
    vector<Social> socialVector;
    vector<Production> productionVector;
    vector<Security> securityVector;
    vector<OfficeAutomation> officeAutomationVector;
    vector<Navegator> navegatorVector;
    //listas usuarios
    vector<Admin> adminVector;
    vector<User> userVector;
    vector<Kid> kidVector;
    //llenar listas
    readFileUsers(adminVector,userVector,kidVector);
    readFileSoftwares(gameVector,socialVector,productionVector,securityVector,officeAutomationVector,navegatorVector);
    //menu
    show_menu(adminVector,userVector,kidVector);
    return 0;
}