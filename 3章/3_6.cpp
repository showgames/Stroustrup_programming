//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  ユーザーに3つの整数値を入力させ、コンマ(,)で区切られた数列として値を出力するプログラム
//  10 4 6 と入力した場合、 4, 6, 10 と出力する。
//  今回は配列,vectorは使わずに書く

#include "../std_lib_facilities.h"

int
main()
{
    int val1 = 0, val2 = 0, val3 = 0, tmp = 0;
    cout << "Please enter three integer values:\n";
    cin >> val1 >> val2 >> val3;

    if(val1 > val2){
        tmp = val1;
        val1 = val2;
        val2 = tmp;
    }
    if(val1 > val3){
        tmp = val1;
        val1 = val3;
        val3 = tmp;
    }
    if(val2 > val3){
        tmp = val2;
        val2 = val3;
        val3 = tmp;
    }

    cout << val1 << ", " << val2 << ", " << val3 << '\n';
}
