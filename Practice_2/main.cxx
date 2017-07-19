// 2. sum関数を実装しよう！
// 関数名はsum_array(配列)
// 戻り値は合計
// 最初にデータ数Nを入力し
// N個分のデータを入力し合計を表示せよ



#include <iostream>


int sum_array(int a[]){
    int i=0,go=0;
    while(a[i] != NULL){
        go += a[i];
        i++;
    }
    return go;
}

int main(){
    // insert code here...
    //std::cout << "Hello, World!\n";
    int N = 0;
    int *a; // ポインタ変数
    int ans;

    // データの個数を取得
    std::cin >> N;

    // データを取得する（N個分）
    a = new int[N];
    for(int i=0;i<N;i++){
        std::cin >> a[i];
    }
    std::cout << std::endl;
    for(int i=0;i<N;i++){
        std::cout << "a[" << i << "]" << a[i] << std::endl;
    }

    ans = sum_array(a);
    std::cout << "ans=" << ans << std::endl;
    return 0;
}
