//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  1セント硬貨, 5セント硬貨, 10セント硬貨, 25セント硬貨,
//  50セント硬貨, 1ドル硬貨の数をユーザーに入力させるプログラム
//  そして、それぞれの枚数を出力する

#include "../std_lib_facilities.h"

int
main()
{
    int penny = 0, nickel = 0, dime = 0, quarter = 0,
        half_dollar = 0, dollar = 0;
    int total = 0;

    cout << "How many pennies do you have?\n";
    cin >> penny;
    cout << "How many nickels do you have?\n";
    cin >> nickel;
    cout << "How many dimes do you have?\n";
    cin >> dime;
    cout << "How many quarters do you have?\n";
    cin >> quarter;
    cout << "How many half_dollars do you have?\n";
    cin >> half_dollar;
    cout << "How many dollars do you have?\n";
    cin >> dollar;

    if(penny == 1) cout << "You have " << penny << " pennie.\n";
    else cout << "You have " << penny << " pennies.\n";

    if(nickel == 1) cout << "You have " << nickel << " nickel.\n";
    else cout << "You have " << nickel << " nickels.\n";

    if(dime == 1) cout << "You have " << dime << " dime.\n";
    else cout << "You have " << dime << " dimes.\n";

    if(quarter == 1) cout << "You have " << quarter << " quarter.\n";
    else cout << "You have " << quarter << " quarters.\n";

    if(half_dollar == 1) cout << "You have " << half_dollar << " half_dollar.\n";
    else cout << "You have " << half_dollar << " half_dollars.\n";

    if(dollar == 1) cout << "You have " << dollar << " dollar.\n";
    else cout << "You have " << dollar << " dollars.\n";

    total = penny + (nickel*5) + (dime*10) + (quarter*25) + (half_dollar*50) + (dollar*100);
    cout << total/100 << " dollar " << total - ((total/100) * 100) << " cents" << '\n';

}
