#include <iostream>

int main(int argv, char **argc)
{
    std::string val(argc[1]);

    if(val=="-v"){
        std::cout << "Version:0.0.1" << std::endl;
        return 0;
    }

    for(int i=1;i<argv;i++){
        std::cout << std::string(argc[i]) << " ";
    }
    std::cout << std::endl;
    return 0;
}
