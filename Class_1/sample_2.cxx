//
// Classを使う Part 2(継承編)
//

#include <iostream>

class A{
public:
    void test1(){
        std::cout << "test1が呼ばれました" << std::endl;
    }

    void test2(){
        std::cout << "test2が呼ばれました" << std::endl;
    }
};

class B:A{
public:
    void test5(){
        test1();
    }
};


class C:public A{
public:
    void test3(){
        std::cout << "test3が呼ばれました" << std::endl;
    }
    void test4(){
        std::cout << "test4が呼ばれました" << std::endl;
    }
};

int main() {
    B b;
    C c;
    c.test1();
    c.test2();
    c.test3();
    c.test4();
    b.test5();
    return 0;
}





