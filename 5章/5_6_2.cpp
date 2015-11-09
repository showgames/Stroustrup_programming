//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 温度を華氏から摂氏へと変換するプログラム

#include "../std_lib_facilities.h"


double
ktoc(double k)
// 温度を華氏から摂氏へと変換するプログラム
// 事前条件 : kは-459.67以上
// 事後条件 : cは-273.15以上
{
    if(k < -459.67) error("ktoc pre-condition");
    double c = (5*k-160)/9.0;

    if(c < -273.15) error("ctok post-condition");
    return c;
}


int
main()
{
    double k = 0;
    cin >> k;
    if(!cin) error("couldn't read a double in main() function");

    cout << ktoc(k) << '\n';
}
