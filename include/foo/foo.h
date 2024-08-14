#include <iostream>
#include <string>
void hello(std::string &word);

class monkey{
    std::string name;
    int age;
    
    public:
        monkey(int age, std::string name);
        std::string get_name(); 
};