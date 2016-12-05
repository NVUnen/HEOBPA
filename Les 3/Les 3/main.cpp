#include <iostream>
#include <string>


using namespace std;

template<typename T> T biggest(T first, T second) {
    if (first > second) return first;
    return second;
}

int main ()
{
    
    // Array van strings
    // Hoe wordt de volgorde van de strings in de array bepaalt?
    string arraystring[5] {"Hitman","Battlefield one", "Unravel", "AC4", "Batman"};
    //sort(arraystring, arraystring+5);
    //for(const auto& str : arraystring) cout <<str << " ";
    //cout << endl;
     
     
    //Array van floats
    float arrayfloat[5] {20,4,6,8,10};
    //sort(arrayfloat, arrayfloat+5);
    //for(const auto& str : arrayfloat) cout <<str << " ";
    // cout << endl;
    
    
    
    return 0;
     
    
}
