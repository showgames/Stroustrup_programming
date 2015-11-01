//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 2次方程式 ax^2+bx+c=0 を解くプログラム

#include "../std_lib_facilities.h"

int get_value();
void solve_equation(double a, double b, double c);

int
main()
{
    double a, b, c;
    a = get_value();
    b = get_value();
    c = get_value();
    solve_equation(a, b, c);
}



int
get_value()
{
    double val = 0;
    cin >> val;
    return val;
}

void
solve_equation(double a, double b, double c)
{
    double x1 = 0, x2 = 0;
    double common = b*b-4*a*c;

    x1 = (-b + sqrt(common)) / (2*a);
    x2 = (-b - sqrt(common)) / (2*a);

    // 解の出力はこの関数の中ではなく別の場所に記述するべき
    cout << "(" << x1 << "," << x2 << ")" << "\n";
}
