//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// 名前,スコアのペアの入力を受け取り、それらを一行ずつ出力する
// その後、名前を入力してそのスコアを検索するプログラム

#include "../std_lib_facilities.h"

vector<string> names;
vector<int> scores;

void reg_list();
void search_name(string name);

int
main()
{
    reg_list();

    string name;
    cin >> name;

    search_name(name);
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
search_name(string name)
{
    for(int i = 0; i < names.size(); ++i){
        if(names[i] == name){
            cout << names[i] << ":" << scores[i] << "\n";
            return;
        }
    }
    cout << "Not found name\n";
}
