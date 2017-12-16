#include <iostream>

int main(int argv, char **argc)
{
    std::string val(argc[1]);
    if(val=="-v"){
        std::cout << "Version:0.0.1" << std::endl;
    }else{
        std::cout << val << std::endl;
    }
    return 0;
}
