//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 名前,スコアのペアの入力を受け取り、それらを一行ずつ出力する

#include "../std_lib_facilities.h"

int
main()
{
    vector<string> names;
    vector<int> scores;
    string name;
    int score;

    while(cin >> name >> score){
        if(name == "noname") break;
        names.push_back(name);
        scores.push_back(score);
    }

    for(int i = 0; i < names.size(); ++i){
        cout << names[i] << ":" << scores[i] << "\n";
    }
}
