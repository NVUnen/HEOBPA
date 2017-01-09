#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


vector<string> arrayString = {"Hitman","Battlefield one", "Unravel", "AC4", "Batman"};
vector<int> arrayInt = { 100, 45, 77, 9 , 56};

template<typename T>
T sorting(vector<T> Vector) {
      sort(Vector.begin(), Vector.end());
    for (T &s : Vector) {
        cout << s << " ";
    }
    return NULL;
}

template<>
string sorting(vector<string> Vector) {
    sort(Vector.begin(), Vector.end());
    for (string &s : Vector) {
        cout << s << " ";
    }
    return "0";
}



int main ()
{
   
    sorting(arrayString);
    sorting(arrayInt);
    
    string input;
    cin >> input;

    
    return 0;
     
    
}
