//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.
//  ネズミ算

#include "../std_lib_facilities.h"

int
main()
{
    const int masu = 64;
    int gr = 0;
    for(int i = 0; i < masu; ++i){
        if(i == 0) gr = 1;
        else gr *= 2;
        cout << i + 1 << "マス目: "<< gr << "グレーン" << '\n';
    }
}
