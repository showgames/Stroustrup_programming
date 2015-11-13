//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

// bull and cow ゲームの改良版
// 1. ゲームが繰り返しプレイ可能
// 2. 答えをハードコーディングせずに毎ゲームごとに乱数で生成

#include "../std_lib_facilities.h"

vector<int> answer(4);
vector<int> inputs(4);
int bull = 0;
int cow = 0;


void
make_random_value()
// 各ゲームごとに違う答えを作る
{
    int seed = 0;
    cout << "seed値を入力してください: ";
    cin >> seed;
    srand(seed);
    for(int i = 0; i < answer.size(); ++i)
        answer[i] = randint(10);
}

void
user_answer()
// ユーザーの解答を読み込む
{
    for(int i = 0, input = 0; i < answer.size(); ++i) {
        cin >> input;
        if(input < 0 || input > 9) error("bad_answer");
        else inputs[i] = input;
    }
}


void
initialize_value()
// 答え合わせをリセットする
{
    bull = 0;
    cow  = 0;
}


void
check_answer()
// 答え合わせ
{
    initialize_value();
    for(int i = 0; i < answer.size(); ++i) {
        if(inputs[i] == answer[i]) ++bull;             // 位置を答えが一致していればbullを1増やす
        else {
            for(int j = 0; j < answer.size(); ++j) {
                if(inputs[i] == answer[j]) ++cow;      // 答えの中に存在すればcowを1増やす
            }
        }
    }
}

void
display_result()
// 結果を表示
{
    cout << bull << " bull" << " and " << cow << " cow\n";
}





int
main()
{
    while(1) {
        initialize_value();
        make_random_value();
        while(bull != 4) {
            user_answer();
            check_answer();
            display_result();
        }
    }
}
