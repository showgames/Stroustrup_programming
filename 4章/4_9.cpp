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
    int ans = 0;
    double gr = 0;
    double hope_gr = 0;

    while(cin >> hope_gr){
        for(int i = 0; i < masu; ++i){
            if(i == 0) gr = 1;
            else gr *= 2;
            if(hope_gr <= gr) {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "マス目" << "\n";
    }
}
