//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  ユーザーに2つの浮動小数点数を入力させ、それらの値の最小値、最大値、合計、差、積、比率を求めそれらを出力するプログラム
//  また、3_4のプログラムと比較して出力がどのように変わっているかを確認する。

#include "../std_lib_facilities.h"

int
main()
{
    double val1 = 0, val2 = 0;
    cout << "Please enter two value of double:\n";
    cin >> val1 >> val2;
    if(!cin) error("bad input");

    // 出力
    // 最大値
    if(val1 > val2)  cout << "MAX: " << val1 << '\n';
    if(val1 < val2)  cout << "MAX: " << val2 << '\n';
    if(val1 == val2) cout << "two values are equal\n";

    // 合計, 差, 積, 比率
    cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n'
         << val1 << " - " << val2 << " = " << val1 - val2 << '\n'
         << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
    if(val2 == 0)
        cout << "Sorry, I can't divide by zero!\n";
    else
        cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';

}
