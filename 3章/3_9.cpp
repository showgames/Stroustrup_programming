//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  zeroやtwoのように文字で書かれた数字を0や2に変換するプログラム
//  0, 1, 2, 3, 4の値に対応する

#include "../std_lib_facilities.h"

int
main()
{
    string value = " ";
    cout << "Please enter a string of value:\n";
    cin >> value;

    if(value == "zero") cout << value << ": 0\n";
    else if(value == "one")   cout << value << ": 1\n";
    else if(value == "two")   cout << value << ": 2\n";
    else if(value == "three") cout << value << ": 3\n";
    else if(value == "four")  cout << value << ": 4\n";
    else cout << value << ": not a number I know\n";
}
