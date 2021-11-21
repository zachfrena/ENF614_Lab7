#include <iostream>
#include <string>
#include <vector>
#include "LoginServer.hpp"
using namespace std;


#ifndef Client_B_HPP
#define Client_B_HPP

class Client_B{
public:
void add(string username, string password);
User* validate(string username, string password);

private:
LoginServer* instance;
};

// LoginServer* LoginServer::instance = nullptr;

#endif
