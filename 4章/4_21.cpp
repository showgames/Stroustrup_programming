//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 名前,スコアのペアの入力を受け取り、それらを一行ずつ出力する
// その後、点数を入力してその点数を持つ名前をすべて出力するプログラム

#include "../std_lib_facilities.h"

vector<string> names;
vector<int> scores;

void reg_list();
void search_score(int score);

int
main()
{
    reg_list();

    int score;
    cin >> score;

    search_score(score);
}

void
reg_list()
{
    string name;
    int score;
    while(cin >> name >> score){
        if(name == "noname") return;
        names.push_back(name);
        scores.push_back(score);
    }
}

void
search_score(int score)
{
    int count = 0;
    for(int i = 0; i < names.size(); ++i){
        if(scores[i] == score){
            cout << names[i] << ":" << scores[i] << "\n";
            ++count;
        }
    }
    if(!count){
        cout << "score not found\n";
    }
}
