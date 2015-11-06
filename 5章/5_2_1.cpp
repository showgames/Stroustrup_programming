//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 摂氏(セルシウス度)を絶対温度に変換

#include "../std_lib_facilities.h"

double
ctok(double c)
{
    const double kelvin = 273.15;
    return c + kelvin;
}

int
main()
{
    double c = 0;
    cin >> c;

    if(c < -273.15) error("too low temperture"); // エラー処理
    double k = ctok(c);
    cout << k << endl;
}
