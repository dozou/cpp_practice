//
// Created by 船戸恒宏 on 2017/12/16.
//

#include <iostream>
#include <vector>



int main() {
    std::vector<double> vec;
    vec.push_back(10.5);
    vec.push_back(10.5);
    vec.push_back(10.5);
    vec.push_back(10.5);
    vec.push_back(10.5);

    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << std::endl;
    }
    
    return 0;
}


