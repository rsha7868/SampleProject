//
//  Controller.cpp
//  SampleProject
//
//  Created by Sharp, Ryan on 1/25/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//
#include <iostream>
#include <vector>
#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    int i;
    int a = 1;
    int o = 1;

    for(int i = o; i < a; i++)
    {
        cout << "This is the " << i << " time in a loop" << endl;
    }
}



