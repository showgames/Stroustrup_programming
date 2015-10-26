//
//  main.cpp
//  Practice
//
//  Created by forest_hornet on 2015/10/10.
//  Copyright © 2015年 Shohei Hayashi. All rights reserved.


#include "../std_lib_facilities.h"

int
main()
{
    vector<double> distances;
    double distance = 0;
    double total = 0;
    while(cin >> distance)
        distances.push_back(distance);

    for(int i = 0; i < distances.size(); ++i){
        total += distances[i];
    }

    sort(distances.begin(), distances.end());
    cout << "Total distances: " << '\t' << total << "\n";
    cout << "Average distances: " << '\t' << total/distances.size() << "\n";
    cout << "Min distances: " << '\t' << distances[0] << "\n";
    cout << "Max distances: " << '\t' << distances[distances.size()-1] << "\n";
}
