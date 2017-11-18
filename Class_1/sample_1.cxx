//
// Classを使う Part 1
//

#include <iostream>

class A{
private: //アクセス指定子
    int val{0}; //メンバ変数
public:
    A():val(0){ //コンストラクタ　(クラス名と同じメソッド)
        std::cout << "コンストラクタが呼ばれました" << std::endl;
    }

    A(A& _a){ //コピーコンストラクタ　通常は定義しなくても良いが．同じ型同士で任意のメンバだけをコピーしたい時やコピーログを取りたい時に定義する
        std::cout << "コピーコンストラクタが呼ばれました" << std::endl;
        val = _a.val;
    }

    void set_val(int _val){ val=_val; } //クラス内にある関数のことをメソッドと呼ぶ
    int get_val(){ return val; } // メンバ変数にアクセスするメソッドのことをセッター/ゲッターと呼ぶ
};

int main() {
    A a; //インスタンス生成　オブジェクト化
    a.set_val(10);

    A b = a;
    a.set_val(20);

    std::cout << "a:" << a.get_val() << std::endl;
    std::cout << "b:" << b.get_val() << std::endl;
    return 0;
}


