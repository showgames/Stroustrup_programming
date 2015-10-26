//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
// 入力されたデータから中央値を計算する
//  中央値は必ずしも数列の要素にあるとは限らない(偶数個の場合)

#include "../std_lib_facilities.h"

int
main()
{
    vector<double> temps; // 温度
    double temp;
    while(cin >> temp)
        temps.push_back(temp);

    // 中央値の計算
    sort(temps.begin(), temps.end());
    if(temps.size()%2 != 0)
        cout << "Median temperature: " << temps[temps.size()/2] << endl;
    else
        cout << "Median temperature: " << (temps[temps.size()/2 - 1] + temps[temps.size()/2]) / 2.0 << endl;
}
