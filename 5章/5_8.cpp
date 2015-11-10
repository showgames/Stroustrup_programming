//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 一連の整数を読み取って格納し、最初のN個の整数の合計を求めるプログラム

#include "../std_lib_facilities.h"

int
main()
{
    // 個数の読み取り
    int n = 0;
    cout << "合計した値の数を入力してください:\n";
    cin >> n;

    // 一連の整数の読み取り
    int val = 0;
    vector<int> v;
    cout << "整数を入力し、最後に垂直バー(|)を入力してください:\n";
    while(cin >> val) {
        if(val == '|') break;
        v.push_back(val);
    }

    // 判定
    if(v.size() < n) error("too few value");
    int sum = 0;
    for(int i = 0; i < n; ++i)
        sum += v[i];

    // 出力
    cout << "最初の" << n << "個の数字( ";
    for(int i = 0; i < n; ++i)
        cout << v[i] << ' ';
    cout << ")の合計は" << sum << "です。\n";
}
