#include <iostream>
#include <string>
#include <vector>
#include "LoginServer.hpp"
#include "Client_A.hpp"
#include "User.hpp"
using namespace std;

void Client_A::add(string username, string password){
    cout << "in add" << endl;
    instance = LoginServer::getInstance();
    cout<<"instance created"<<endl;
    (*instance).add(username, password);
    cout<<"made it back from loginServer"<<endl;
}

User* Client_A::validate(string username, string password){
    instance = LoginServer::getInstance();
    return (*instance).validate(username,password);
}
