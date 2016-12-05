#include <iostream>
#include "Child.hpp"

Child::Child(){
    cout <<"ctor"<< endl;
}

Child::Child(const Child& other){
    cout << "cctor" << endl;
    this->name = other.name;
}

Child& Child::operator=(const Child &rhs){
    cout <<"assignment"<<endl;
    this->name = rhs.name;
    return *this;
}

ostream& operator<<(ostream& os, const Child& child){
    os << "CHild:" << child.name << endl;
    return os;
}
