//
//  main.cpp
//  hellow world
//
//  Created by 御子貝真一 on 2017/07/19.
//  Copyright © 2017年 a. All rights reserved.
//
// 1. sum関数を実装しよう！
// 関数名はsum(int x1, int x2)
// 戻り値はx1とx2の合計

#include <iostream>

int sum(int x1,int x2){
    int gou;
    gou = x1 + x2;
    return gou;
}

int main(){
    int x1,x2,gou;
    std::cin >> x1;
    std::cout << x1 << std::endl;

    std::cin >> x2;
    std::cout << x2 << std::endl;

    gou = sum(x1,x2);

    std::cout << "ans=" << gou << std::endl;
    return 0;
}
