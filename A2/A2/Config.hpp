
#pragma once
#include <iostream>
#include <string>;
#include <vector>;

using namespace std;

class Config {
    
public:
    Config(const string& name);
    
    void put(const string& key, const string& value);
    
    string& operator[](const string& key);
    
    friend ostream& operator<<(ostream& os, const Config& config);
    
    
private:
    string name;
    vector<string> keys;
    vector<string> values;
    string NOKEY = "no key";
};
