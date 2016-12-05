#pragma once

#include <string>

#include "Child.hpp"

class Parent{
public:
    Parent();
    Parent(const Parent& other);
    
    Child child;
    string name;
    
    friend ostream& operator<<(ostream& os, const Parent & parent);
};
