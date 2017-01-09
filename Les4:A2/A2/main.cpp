#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
vector<T> pop(vector<T> vec){
    vec.erase(vec.begin());
 
    return vec;
}

template <typename T>
vector<T> push(vector<T> vec, string pushstring){
    long currentsize = vec.size();
    vec.resize(currentsize + 1);
    vec[currentsize] = pushstring;
    
    return vec;
}

template <typename T>
string peek(vector<T> vec){
    string showVal;
    
    showVal = vec[0];
    
    return showVal;
}



int main() {
    
    vector<string> vectors;
   // float floats;
    
    //strings
    vectors = push(vectors, "1");
    vectors = push(vectors, "2");
    vectors = push(vectors, "3");
    vectors = push(vectors, "4");
    vectors = push(vectors, "5");
    vectors = push(vectors, "6");
    cout << peek(vectors) << endl;
    
    vectors = pop(vectors);
    vectors = pop(vectors);
    vectors = pop(vectors);
    cout << peek(vectors) << endl;
    
    //Waarom werkt zoiets niet met een float?
    
    //floats = push(floats, 0.3);
    
    
  
    return 0;
}
