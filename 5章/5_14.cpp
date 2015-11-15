//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.

#include "std_lib_facilities.h"

struct Score {
    vector<int> sunday;
    vector<int> monday;
    vector<int> tuesday;
    vector<int> wednesday;
    vector<int> turesday;
    vector<int> friday;
    vector<int> saturday;
};


int
main()
{
    Score score;
    string day = "";
    int value = 0;
    // 入力
    while(cin >> day >> value) {
        if(day == "Sunday")         score.sunday.push_back(value);
        else if(day == "Monday")    score.monday.push_back(value);
        else if(day == "Tuesday")   score.tuesday.push_back(value);
        else if(day == "Wednesday") score.wednesday.push_back(value);
        else if(day == "Turesday")  score.turesday.push_back(value);
        else if(day == "Friday")    score.friday.push_back(value);
        else if(day == "Saturday") score.saturday.push_back(value);
    }

    // 出力
    cout << "Sunday: " << accumulate(score.sunday.begin(), score.sunday.end(), 0) << endl;
    cout << "Monday: " << accumulate(score.monday.begin(), score.monday.end(), 0) << endl;
    cout << "Tuesday: " << accumulate(score.tuesday.begin(), score.tuesday.end(), 0) << endl;
    cout << "Wednesday: " << accumulate(score.wednesday.begin(), score.wednesday.end(), 0) << endl;
    cout << "Turesday: " << accumulate(score.turesday.begin(), score.turesday.end(), 0) << endl;
    cout << "Friday: " << accumulate(score.friday.begin(), score.friday.end(), 0) << endl;
    cout << "Saturday: " << accumulate(score.saturday.begin(), score.saturday.end(), 0) << endl;
}
