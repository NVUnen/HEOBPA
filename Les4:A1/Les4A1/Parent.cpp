#include <iostream>
#include "Parent.hpp"

//assignment operator
Parent& Parent::operator=(const Parent & source)
{
    if(this == &source)
        return *this;
    
    delete[] name;
    
    lengte = source.lengte;
    
    if(source.name)
    {
        name = new char[lengte];
    
    
    for(int i=0; i < lengte; ++i)
        name[i] = source.name[i];
    }
else
    name = 0;
return *this;
    
}

//copy constructor

/*Parent::Parent(const Parent& source)
{
    date = source.date;
    
    
    //copy constructor
    if(source.name)
    {
        name = new string[date];
        
        for (int i=0; i < date; ++i)
            name[i] = source.name[i];
        
    }
    
    else
        name = 0;

}

*/




//outputstream operator implementatie

ostream& operator<<(ostream& os, const Parent&parent){
    os << "Parent:" << parent.name << endl;
    return os;
}
