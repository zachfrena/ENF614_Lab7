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
    User a = {"1","2"};
    users.push_back(a);
    cout<<"inside loginserver add"<<endl;
    User s = {username, password};
    cout<<"created User object"<<endl;
    users.push_back(s);
    cout<<"sdfsda"<<endl;
}

User* LoginServer::validate (string username, string password){
    for(int i = 0; i<users.size(); i++){
        if(username.compare(users.at(i).username)==0){
            return &users.at(i);
        }
        else{
            return nullptr;
        }
    }
}

// LoginServer* LoginServer::getInstance(){
//     if(instance = nullptr){
//         instance = &LoginServer();
//     }
//     return instance;
// }

LoginServer* LoginServer::getInstance(){
    if(instance = nullptr){
        instance = new LoginServer();
    }
    return instance;
}

LoginServer* LoginServer::instance = nullptr;