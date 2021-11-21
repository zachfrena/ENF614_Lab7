
#include <iostream>
#include <string>
#include <vector>
#include "user.hpp"
using namespace std;



#ifndef LoginServer_HPP
#define LoginServer_HPP

class LoginServer{
public:
    void add(string username, string password);
    User* validate (string username, string password);
    static LoginServer* getInstance();

private:
LoginServer();
LoginServer(const LoginServer& src);
LoginServer& operator =(const LoginServer& rhs);

protected:
vector<User> users = vector<User>(7);
static LoginServer* instance;

};
#endif
