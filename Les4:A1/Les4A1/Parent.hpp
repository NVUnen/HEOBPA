#pragma once
#include <string>
#include <ostream>

using namespace std;

class Parent {
public:
    Parent(string name);
    
    Parent(const Parent& source);
    ~Parent();
    
    friend ostream& operator<<(ostream& os, const Parent& parent);
    Parent& operator=(const Parent& source);
    
private:
char *name;
int lengte;
    
};
