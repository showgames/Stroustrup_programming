//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  整数値を評価して、それが偶数か奇数かを判断するプログラム

#include "../std_lib_facilities.h"

int
main()
{
    int number = 0;
    cout << "Please enter an integer:\n";
    cin >> number;

    if(number%2 == 0) cout << number << " is " << "even.\n";
    else              cout << number << " is " << "odd.\n";
}

// string res = (nuber%2) ? "odd" : "even"; も使ってもいい
