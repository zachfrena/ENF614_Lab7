#include <iostream>
#include "User.hpp"

using namespace std;

int main(){
     cout<<"test"<<endl;

    User test = {"bruh", "bruh"};

    cout<<test.password<<endl;
    vector<User> users = vector<User>();
    users.push_back(test);
    cout<<users.at(0).password<<endl;
    users.push_back({"broski", "broski"});
    cout<<users.at(1).password<<endl;
}
