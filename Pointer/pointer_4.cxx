// 3_3. ポインタを理解しよう！！　（メモリとアドレス）
// 関数のポインタを使ってみよう！

#include <iostream>


void a_func(int* val){
    *val = *val * *val;
}

void b_func(int* val){
    *val = (*val * *val)/2;
}

void calc(int *val ,void func(int *)){
    func(val);
}

int main(){
    int a= 10;

    calc(&a,a_func);
    std::cout << "a_func = " << a << std::endl;

    a = 10;
    calc(&a,b_func);
    std::cout << "b_func = " << a << std::endl;
}
