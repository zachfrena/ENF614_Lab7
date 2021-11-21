#include <iostream>
#include <string>
#include <vector>
#include "LoginServer.hpp"
#include "Client_A.hpp"
#include "User.hpp"
using namespace std;

void Client_A::add(string username, string password){
    instance = LoginServer::getInstance();
    (*instance).add(username, password);
}

User* Client_A::validate(string username, string password){
    instance = LoginServer::getInstance();
    return (*instance).validate(username,password);
}
