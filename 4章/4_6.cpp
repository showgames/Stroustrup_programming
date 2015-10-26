//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


#include "../std_lib_facilities.h"

int
main()
{
    vector<string> nums(10);
    int num = 0;
    nums[0] = "zero";
    nums[1] = "one";
    nums[2] = "two";
    nums[3] = "three";
    nums[4] = "four";
    nums[5] = "five";
    nums[6] = "six";
    nums[7] = "seven";
    nums[8] = "eight";
    nums[9] = "nine";

    while(cin >> num){
        if(num >= nums.size() || num < 0) cout << "Error" << '\n';
        else cout << nums[num] << '\n';
    }
}
