#include "foo.cpp"

int main(){
    std::string name = "Robert";
    hello(name);
    auto monke = monkey(123, "Mikle");
    auto mname = monke.get_name(); 
    hello(mname);
    return 0;
}