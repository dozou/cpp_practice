// 3_1. ポインタを理解しよう！！　（メモリとアドレス）
// ポインタを使って配列を扱おう

#include <iostream>


int main(){
    int a[5]{0}; // 豆知識：=をつけなくてもC++11から配列の初期化はできます．

    // sizeofは静的確保したメモリのバイト数を調べる関数です．
    // sizeofを使うことで配列の要素数を知ることができます．ただし，動的確保では使えません．
    std::cout << "int型のByte数は？:" << sizeof(int) << "(4 * 8bit = 32bit)" << std::endl;
    for (int i = 0; i < (sizeof(a)/sizeof(int)); ++i) {
        std::cout << a[i] << std::endl;
    }


    for (int i = 0; i < (sizeof(a)/sizeof(int)); ++i) {
        std::cout << "a[" << i << "] = " << &a[i] << std::endl;
    }

}