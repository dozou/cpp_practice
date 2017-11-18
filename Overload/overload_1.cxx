//
// 演算子のオーバーロードの刑
//

#include <iostream>

class Int {
private:
    int value{0};

public:
    Int() : value(0) {}

    Int(int _val) : value(_val) {
        std::cout << "代入されました[" << this << "]" << ":" << value << std::endl;
    }

    operator int() {
        std::cout << "int型で返却しました[" << this << "]" << ":" << value << std::endl;
        return value;
    }

    operator double() {
        std::cout << "double型で返却しました[" << this << "]" << ":" << value << std::endl;
        return value;
    }

    Int& operator+(Int& _val){
        Int ans = value + _val.value;
        std::cout << "加算処理を行いました[" << this << "]" << ":" << ans.value << std::endl;
        return ans;
    }

    Int& operator-(Int& _val){
        Int ans = value - _val.value;
        return ans;
    }

    Int& operator ++(){
        ++value;
        std::cout << "前置インクリメントしました[" << this << "]" << ":" << value << std::endl;
        return *this;
    }
    Int operator ++(int){
        Int old(*this);
        ++*this;
        std::cout << "後置インクリメントしました[" << this << "]" << ":" << value << std::endl;
        return old;
    }
    Int& operator --(){
        --value;
        return *this;
    }
    Int operator --(int){
        Int old(*this);
        --*this;
        return old;
    }
};


int main() {
    int a = 5, b = 3, c = 10;
    double d = 12.3;
    Int origin_int_1, origin_int_2;

    /*** 代入&返却 ***/
    std::cout << "-------代入と返却-------" << std::endl;
    origin_int_1 = a; //代入
    origin_int_2 = origin_int_1; //代入
    b = origin_int_1; //int型で返却
    d = origin_int_1; //double型で返却

    std::cout << std::endl << std::endl << std::endl << std::endl;


    /*** インクリメント&デクリメント ***/
    std::cout << "-------インクリメントとデクリメント-------" << std::endl;
    origin_int_1 = 0;
    origin_int_2 = 0;
    a = origin_int_1++;
    a = ++origin_int_1;
    b = origin_int_1--;
    b = --origin_int_1;

    b = ++origin_int_2;
    std::cout << std::endl << std::endl << std::endl << std::endl;

    /*** 加算&減算 ***/
    std::cout << "-------加算&減算-------" << std::endl;
    a = 0;
    origin_int_1 = 5;
    origin_int_2 = 5;
    a = origin_int_1 + origin_int_2;
    std::cout << std::endl << std::endl << std::endl << std::endl;

    return 0;
}


