//
//  TimerController.hpp
//  SampleProject
//
//  Created by Sharp, Ryan on 1/29/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//

#ifndef TimerController_hpp
#define TimerController_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
    
};
private:
clock_t executionTime;
public:
Timer();
void startTimer();
void stopTimer();
void resetTimer();
void displayTimer();
long getTimeInMicroseconds();

#endif /* TimerController_hpp */
