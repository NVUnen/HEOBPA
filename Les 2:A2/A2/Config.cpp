#include "Config.hpp"

Config::Config(string name) {
    this->name = name;
}

Config& Config::operator=(const Config& rhs) {
    if (this != &rhs) {
        keys = rhs.keys;
        values = rhs.values;
        configKeys = rhs.configKeys;
        configValues = rhs.configValues;
    }
    return *this;
}

void Config::put(string key, string value) {
    keys.push_back(key);
    values.push_back(value);
}

void Config::put(string key, Config value) {
    configKeys.push_back(key);
    configValues.push_back(value);
}

string& Config::operator[](string key) {
    for (int i = 0; i < keys.size(); ++i) {
        if (key == keys[i]) {
            return values[i];
        }
    }
    return noSuchKey;
}

ostream& operator<<(ostream& os, const Config& config) {
    os << "# Configfile:" << config.name << endl;
    for (int i = 0; i < config.keys.size(); ++i) {
        os << "  key" << config.keys[i] << "=" << config.values[i] << endl;
    }
    for (int i = 0; i < config.configKeys.size(); ++i) {
        os << "  key" << config.configKeys[i] << "=" << config.configValues[i] << endl;
    }
    
    return os;
}
