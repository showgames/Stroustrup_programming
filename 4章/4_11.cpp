//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  1~100までの素数を出力

#include "../std_lib_facilities.h"

vector<int> prime;
bool is_prime(int n);

int
main()
{
    prime.push_back(2);

    for(int i = 3; i <= 100; ++i)
        if(is_prime(i)) prime.push_back(i);

    cout << "Primes:" << "\n";
    for(int p = 0; p < prime.size(); ++p)
        cout << prime[p] << '\n';
}

bool
is_prime(int n)
{
    for(int p = 0; p < prime.size(); ++p)
        if(n%prime[p] == 0) return false;
    return true;
}
