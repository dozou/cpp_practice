//
// Created by 船戸恒宏 on 2017/12/16.
//

#include <iostream>

template <typename T>
T sum(T a,T b){
    return a+b;
}

int main() {
    std::cout << sum(10.5,10.0) << std::endl;
    return 0;
}


