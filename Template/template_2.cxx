//
// Created by 船戸恒宏 on 2017/12/16.
//

#include <iostream>

template <typename T>
class A{
    T val;
public:
    A(T _a):val(_a){}
    void print(){
        std::cout << val << std::endl;
    }
};

int main() {
    A<char*> test("aaaaaaaa");
    test.print();
    return 0;
}