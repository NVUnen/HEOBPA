#pragma once

#include <string>

using namespace std;

class Child{
public:
    Child();
    Child(const Child& other);
    string name;
    
    Child& operator=(const Child& rhs);
    
    friend ostream& operator<<(ostringstream& os, const Child& child);
    
};
