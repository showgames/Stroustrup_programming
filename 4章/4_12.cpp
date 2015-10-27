//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  入力された数までの素数を出力する

#include "../std_lib_facilities.h"

vector<int> prime;
bool is_prime(int n);
int get_num();

int
main()
{
    int num = 0;
    prime.push_back(2);

    num = get_num();
    for(int i = 3; i <= num; ++i)
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

int
get_num(){
    int num = 0;
    cin >> num;
    return num;
}
