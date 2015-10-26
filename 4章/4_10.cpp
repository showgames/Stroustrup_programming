//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  じゃんけんゲーム

#include "../std_lib_facilities.h"

void init_rand();
int make_te();

int
main()
{
    int hum_te = 0;
    int cpu_te = 0;

    while(cin >> hum_te){
        init_rand();
        cpu_te = make_te();

        switch (cpu_te){
            case 0:
                cout << "You win!" << '\n';
                break;

            case 1:
                cout << "You lose..."<< '\n';
                break;

            case 2:
                cout << "draw "<< '\n';
                break;
        }
    }
    return 0;
}


void
init_rand()
{
    srand((unsigned int)time(NULL));
}

int
make_te()
{
    return rand() % 3;
}
