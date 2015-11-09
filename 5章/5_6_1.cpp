//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 温度を摂氏から華氏へ変換するプログラム

#include "../std_lib_facilities.h"

double ctok(double c)
// 摂氏から華氏へ
// 事前条件 : c は-273.15以上
// 事後条件 : k は -459.67以上
{
    if (c < -273.15) error("ctok() pre-condition");
    double k = 9.0 / 5 * c + 32;

    if (c < -459.67) error("ctok() post-condition");
    return k;
}

int
main()
{
    double c;
    cin >> c;
    if(!cin) error("couldn't read a double int main() function");

    double k = ctok(c);
    cout << k << '\n';
}
