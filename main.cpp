
#include "rapidjson/document.h"
#include <iostream>

using namespace rapidjson;

int main() {
    char json[] = "{\"project\":\"c++-conan-sample\",\"libs\":\"rapidjson\"}";;
    Document d;
    if (d.Parse(json).HasParseError()) {
        printf("Hello!\n");
        return -1;
    }

    Value& v1 = d["project"];
    Value& v2 = d["libs"];
    std::cout << v1.GetString() 
                << "," 
                << v2.GetString() 
                << std::endl;
    return 0;
}