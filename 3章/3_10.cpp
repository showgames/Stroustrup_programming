//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  演算に続いて2つのオベランドを受け取り、結果を出力するプログラム
//  + 100 3.14
//  * 4 5

#include "../std_lib_facilities.h"

int
main()
{
    string operation = " ";
    double val1 = 0, val2 = 0;
    cout << "Please enter one operator and two values (eg. + 100 3.14):\n";
    cin >> operation >> val1 >> val2;

    if(operation == "+" || operation == "plus")       cout << val1 << operation << val2 << " = " << val1 + val2 << '\n';
    else if(operation == "-" || operation == "minus") cout << val1 << operation << val2 << " = " << val1 - val2 << '\n';
    else if(operation == "*" || operation == "mul")   cout << val1 << operation << val2 << " = " << val1 * val2 << '\n';
    else if(operation == "/" || operation == "div") {
        if(val2 == 0) cout << "Sorry, can't divide by zero\n";
        else cout << val1 << operation << val2 << " = " << val1 / val2 << '\n';
    }
    else cout << "not available operator\n";
}
