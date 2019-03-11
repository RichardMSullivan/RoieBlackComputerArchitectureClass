#include <iostream>
#include <string>

void message(std::string string);

int main(){

    std::string name = "Richard Sullivan";
    
    const char* charName = "richard sullivan";

    message(name);
    message(charName);

    return 0;
}

void message(std::string string){
 
    std::cout<< string <<std::endl;
}
