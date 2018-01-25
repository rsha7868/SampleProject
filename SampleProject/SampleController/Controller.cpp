//
//  Controller.cpp
//  SampleProject
//
//  Created by Sharp, Ryan on 1/25/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for(int index = 0; index < 10; index++)
    {
        cout << "This is the " << index + 1 << " time in a loop" << endl;
    }
}
