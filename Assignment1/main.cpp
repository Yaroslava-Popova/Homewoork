/* Popova Yaroslava
    st132757@student.spbu.ru
    project №1 "Hello world"
*/
#include <iostream>
#include <string>
#include "headers.h"

std::string hi;

int main() {
    hello();
    std::cout<<std::endl;
    std::string cut = hi.substr(0, 7);
    std::string name;
    while (name != "stop") {
      std::cin>>name;
      std::cout << cut << name << "!" << std::endl;
    }
    return 0;
}
