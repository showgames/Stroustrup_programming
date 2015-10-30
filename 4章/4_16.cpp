//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 一連の値から整数の最頻値を検出するプログラム

#include "std_lib_facilities.h"

int
main()
{
    int num = 0;
    int mode = 0;
    int count = 0;
    int temp_count = 0;
    vector<int> nums;

    // 数列の入力
    while(cin >> num)
        nums.push_back(num);

    // 最頻値の判定
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); ++i){
        temp_count = 1;
        for(int j = i + 1; j < nums.size(); ++j){
            if(nums[i] == nums[j]) ++temp_count;
        }
        if(temp_count > count) {
            count = temp_count;
            mode = nums[i];
        }
    }

    // 最頻値の出力
    cout << "mode: " << mode << "\n";
    cout << count << " times" << "\n";
}
