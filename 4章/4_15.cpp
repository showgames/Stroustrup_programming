//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 入力値 n を受け取って、最初の n 個の素数を出力するプログラム

#include "std_lib_facilities.h"

vector<int> primes;

int get_lim();
bool is_prime(int n);

int
main()
{
    int lim = 0;
    lim = get_lim();

    primes.push_back(2);

    // 素数判定
    int num = 3;
    while(primes.size() <= lim){
        if(is_prime(num)) primes.push_back(num);
        ++num;
    }

    // 出力
    for(int i = 0; i < primes.size(); ++i){
        cout << primes[i] << "\n";
    }
}


int
get_lim()
{
    int lim = 0;
    cin >> lim;
    return lim;
}

bool
is_prime(int n)
{
    for(int p = 0; p < primes.size(); ++p)
        if(n%primes[p] == 0) return false;
    return true;
}
