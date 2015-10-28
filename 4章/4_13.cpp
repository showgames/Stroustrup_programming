//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

//  エラトステネスの篩
//  (1)素数の倍数は素数ではない
//   eg. 2, 3, 5, 7は素数であるから
//       4, 6, 10, 14は素数でない

//  (2)素数でない数(合成数)は必ずその数の平方根以下に分類できる
//   eg. 98は合成数である。98の平方根は9ちょっとである
//        98 = 2 * 49
//        どのようにしても、10以上の数2つに分解することはできない。なぜなら、
//        10 * 10 = 100
//        だからである。

#include "../std_lib_facilities.h"

vector<int> is_prime;

int
main()
{
    const int MAX = 100;
    // 初期化
    for(int i = 0; i < MAX; ++i){
        is_prime.push_back(1);
    }

    // 判定
    for(int i = 2; i < sqrt(MAX); ++i){
        if(is_prime[i]){
            for(int j = 0; i * (j + 2) < MAX; ++j){
                is_prime[i * (j + 2)] = 0;
            }
        }
    }

    // 出力
    for(int i = 2; i < MAX; i++){
        if(is_prime[i]){
            cout << i << endl;
        }
    }

}
