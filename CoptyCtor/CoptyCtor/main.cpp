#include <iostream>
#include "Child.hpp"
#include "Parent.hpp"

int main(){
    Child child1;
    child1.name = "childone";
    Child child2;
    child2.name = "child2done";
    
    Child child3;
    child3 = child1;
    cout << &child3 << endl;
    
    Child child4 = child1;
    
    Parent parent1;
    parent1.name = "parent1";
    parent1.child = child1;
    
    cout << parent1 << endl;
    
    Parent parent2;
    parent2 = parent1;
    parent2.name = "Parent2";
    
    cout << parent2 << endl;
    
    child1.name = "MODIFIED CHILD1";
    cout << parent1 << endl;
    cout << parent2 << endl;
    
    
    return 0;
}
