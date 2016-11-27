
#include <iostream>
#include "Config.hpp"

int main() {
    Config config = Config("SimpleConfig");
    config.put("key1", "value1");
    config.put("key2", "value2");
    
    cout << config << endl;
    
    return 0;
}
