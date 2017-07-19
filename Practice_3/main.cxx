// 3. ポインタを理解しよう！！　（メモリとアドレス）
// ポインタはアドレスを格納する変数だよ

#include <iostream>

int main(){
    int *a; //ポインタ変数
    int b=10;

    a = &b; //通常変数は&でポインタ（アドレス）を表すことができるよ！
    std::cout << b << std::endl;
    std::cout << &b << std::endl << std::endl;

    b = 12;

    std::cout << a << std::endl;
    std::cout << *a << std::endl; //ポインタ変数は*印でデータを表すことができるよ！！
}
