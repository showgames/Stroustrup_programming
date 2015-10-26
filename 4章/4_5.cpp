//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

//  実数2つと演算子1つを受けとって計算結果を出力する簡単な電卓
//  剰余計算も対応出来るようにする

#include "../std_lib_facilities.h"

int
main()
{
    double n1 = 0 ,n2 = 0;
    double res = 0;
    char ope = ' ';

    while(cin >> n1 >> n2 >> ope){
        switch (ope){
                case '+':
                res = n1 + n2;
                break;

                case '-':
                res = n1 - n2;
                break;

                case '*':
                res = n1 * n2;
                break;

                case '/':
                if(n2 == 0){
                    cout << "Sorry, I can't divide by zero!" << '\n';
                    continue;
                }
                res = n1 / n2;
                break;

                //case '%':
                //if(n2 == 0){
                //    cout << "Sorry, I can't divide by zero!" << '\n';
                //    continue;
                //}
                //res = (int)n1 % (int)n2;
                //break;

                default:
                cout << "Sorry, I can't understand the operator: " << ope << '\n';
                continue;
        }
        cout << n1 << ope << n2 << " = " << res << '\n';
    }
    return 0;
}
