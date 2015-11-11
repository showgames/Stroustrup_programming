//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// フィボナッチ数列の先頭から指定された数の値を出力するプログラム

#include "std_lib_facilities.h"

int
main()
{
    // 出力個数の入力
    int num = 0;
    cout << "出力したい個数を入力してください: ";
    cin >> num;

    // フィボナッチ数の計算
    int temp = 0;
    vector<int> fib;
    for(int i = 0, fst = 0, sec = 1; i < num; ++i) {
        if(sec < 0) error("couldn't understand minus value", i + 1); // エラー処理
        fib.push_back(sec);
        temp = sec;
        sec += fst;
        fst = temp;
    }

    // フィボナッチ数の出力
    for(int i = 0; i < num; ++i)
        cout << fib[i] << " ";
}
