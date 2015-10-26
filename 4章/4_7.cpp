//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


#include "../std_lib_facilities.h"

vector<string> nums;

void initialize_vector();
int get_number();

int
main()
{
    int val1 = 0, val2 = 0;
    int res = 0;
    char op = 0;

    initialize_vector();
    while(true){
        val1 = get_number();
        cin >> op;
        val2 = get_number();
        switch (op){
                case '+':
                res = val1 + val2;
                break;

                case '-':
                res = val1 - val2;
                break;

                case '*':
                res = val1 * val2;
                break;

                case '/':
                if(val2 == 0){
                    cout << "Sorry, I can't divide by zero" << "\n";
                    continue;
                }
                else res = val1 / val2;
                break;

                case '%':
                if(val2 == 0){
                    cout << "Sorry, I can't divide by zero" << "\n";
                    continue;
                }
                else res = val1 % val2;
                break;

                default:
                cout << "Sorry, I can't understand the operator: " << op << "\n";
                break;
        }
        cout << val1 << op << val2 << " = " << res << "\n";
    }
}

void
initialize_vector()
{
    nums.push_back("zero");
    nums.push_back("one");
    nums.push_back("two");
    nums.push_back("three");
    nums.push_back("four");
    nums.push_back("five");
    nums.push_back("six");
    nums.push_back("seven");
    nums.push_back("eight");
    nums.push_back("nine");
}

int get_number()
{
    int num = 0;
    if(cin >> num){
        return num;
    }

    cin.clear();
    string s;
    cin >> s;
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] == s) num = i;
    }
    return num;
}
