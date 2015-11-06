//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 摂氏(セルシウス度)を絶対温度に変換
// エラー処理をctok関数で行う方法

#include "../std_lib_facilities.h"

class Bad_temp { }; // ctok関数からエラーを報告するための型

double
ctok(double c)
// 摂氏を絶対温度に変換
// 事前条件:cは-273.15以上
// 事後条件:戻り値は0以上
{
    if(c < -273.15) throw Bad_temp();
    const double kelvin = 273.15;
    return c + kelvin;
}

int
main()
try {
    double c = 0;
    cin >> c;

    double k = ctok(c);
    cout << k << endl;
}
catch (Bad_temp) {
    cout << "too low temperture!\n";
}
