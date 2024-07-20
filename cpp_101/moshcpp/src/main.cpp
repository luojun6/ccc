#include <iostream>
#include "utils/greet.hpp"

int main(int argc, char **argv) {
    
    std::string name = "JunLuo";

    messaging::greet(name);

    return 0;
}