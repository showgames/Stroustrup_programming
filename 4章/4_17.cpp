//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// string型の一連の値から最小値、最大値、最頻値を検出するプログラム

#include "../std_lib_facilities.h"

int
main()
{
    string word = "";
    string mode = "";
    int count = 0;
    int temp_count = 0;
    vector<string> words;

    // 数列の入力
    while(cin >> word)
        words.push_back(word);

    // 最頻値の判定
    sort(words.begin(), words.end());
    for(int i = 0; i < words.size(); ++i){
        temp_count = 1;
        for(int j = i + 1; j < words.size(); ++j){
            if(words[i] == words[j]) ++temp_count;
        }
        if(temp_count > count) {
            count = temp_count;
            mode = words[i];
        }
    }


    // 最頻値の出力
    cout << "mode: " << mode << "\n";
    cout << count << " times" << "\n";
    // 最大値, 最小値の出力
    cout << "min: " << words[0] << "\n";
    cout << "max: " << words[words.size() - 1] << "\n";
}
