#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Config {
public:
    Config(string name);
    
    Config& operator=(const Config&);
    
    void put(string key, string value);
    
    void put(string key, Config value);
    
    string& operator[](string key);
    
    friend ostream& operator<<(ostream& os, const Config& config);
    
private:
    string noSuchKey = "NO_SUCH_KEY";
    string name;
    vector<string> keys;
    vector<string> values;
    vector<string> configKeys;
    vector<Config> configValues;
};
