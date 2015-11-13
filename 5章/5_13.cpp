//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


#include "std_lib_facilities.h"

vector<int> answer(4);
vector<int> inputs(4);
int bull = 0;
int cow = 0;


int
main()
{
    vector<int> answer(4);
    vector<int> inputs;
    int bull = 0, cow = 0;
    int seed = 0;


    // 各ゲームの答えを新しくする
    cout << "seed値を入力してください: ";
    cin >> seed;
    srand(seed);
    for(int i = 0; i < answer.size(); ++i)
        answer[i] = randint(10);


    // ユーザーが解答
    for(int i = 0, input = 0; i < answer.size(); ++i) {
        cin >> input;
        if(input < 0 || input > 9) error("bad_answer");
        else inputs[i] = input;
    }


    // 答え合わせ
    for(int i = 0; i < answer.size(); ++i) {
        if(inputs[i] == answer[i]) ++bull;              // 位置と答えが一致していればbullを1増やす
        else {
            for(int j = 0; j < answer.size(); ++j) {
                if(inputs[i] == answer[j]) ++cow;       // 答えの中に存在すればcowを1増やす
            }
        }
    }


    // 結果出力
    cout << bull << " bull" << " and " << cow << " cow\n";
}
