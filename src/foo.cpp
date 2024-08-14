#include "../include/foo/foo.h"

void hello(std::string &word) {
    std::cout << "Hello, " + word + "!" << std::endl;
}


monkey::monkey(int age, std::string name)
{
    this->age = 10;
    this->name = "Barry";
}

std::string  monkey::get_name() {
    return this->name;
}
