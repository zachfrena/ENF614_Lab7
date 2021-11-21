 #include <iostream>
#include <string>
#include <vector>
#include "user.hpp"
#include "LoginServer.hpp"
using namespace std;

LoginServer::LoginServer(){
    
}

LoginServer::LoginServer(const LoginServer& src){ //copy constructor?
}

LoginServer& LoginServer::operator =(const LoginServer& rhs){

    return *this;
}


void LoginServer::add(string username, string password){
    for(int i = 0; i <users.size(); i++){
        if(username.compare(users.at(i).username) == 0){
            return;
        }
    }
    users.push_back({username, password});
}

User* LoginServer::validate (string username, string password){
    for(int i = 0; i<users.size(); i++){
        if(username.compare(users.at(i).username)==0 && 
        password.compare(users.at(i).password)==0){
            return &users.at(i);
        }  
    }  
    return nullptr;
}


LoginServer* LoginServer::getInstance(){
    if(instance == nullptr){
        instance = new LoginServer();
    }
    return instance;
}

LoginServer* LoginServer::instance = nullptr;