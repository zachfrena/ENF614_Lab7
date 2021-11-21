#include <iostream>
#include <string>
#include <vector>
#include "LoginServer.hpp"
#include "Client_B.hpp"
using namespace std;

void Client_B::add(string username, string password){
    instance = LoginServer::getInstance();
    (*instance).add(username, password);
}

User* Client_B::validate(string username, string password){
    instance = LoginServer::getInstance();
    return (*instance).validate(username,password);
}
