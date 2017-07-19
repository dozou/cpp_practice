// 3_2. ポインタを理解しよう！！　（メモリとアドレス）
// 関数の引数をポインタにしてみよう！！

#include <iostream>


void scale(int *val, int s){
    *val = *val * s;
}


int main(){
    int a=10, b=5;

    scale(&a,b);

    std::cout << a << std::endl;
}
