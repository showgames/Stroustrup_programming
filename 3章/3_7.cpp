//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  ユーザーに3つの文字列値を入力させ、コンマ(,)で区切られた文字列の並びとして値を出力するプログラム
//   Steinbeck Hemingway Fitzgeraldと入力した場合, Fitzgerald, Hemingway, Steinbeckと出力する。
//  今回は配列,vectorは使わずに書く

#include "../std_lib_facilities.h"

int
main()
{
    string val1 = " ", val2 = " ", val3 = " ", tmp = " ";
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
