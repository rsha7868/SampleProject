//
//  Runner.cpp
//  SampleProject
//
//  Created by Sharp, Ryan on 1/25/18.
//  Copyright © 2018 Sharp, Ryan. All rights reserved.
//
// only can relate to a .hpp not a .cpp
#include "Controller.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Example
    
    // Create a vector to store int
    vector<int> vec;
    int i = 1;
    
    // Display the original size of vec
    cout << "vector size = " << vec.size() << endl;
    
    // Access (#) of value into the vector
    for(i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    // Display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;
    
    // Access (#) values from the vector
    for(i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    
    // Use interator to access the values
//    vector<int> :: iterator v = vec.begin();
//    while(v != vec.end())
//    {
//        cout << "value of v = " << *v << endl;
//    }
    string name = "Ryan Sharp";
    cout << name << endl;
    int i = 0;
    int a = 13;
    int b = 31;
    for(i = 0; a < b; i++)
    {
        
    
    
    
    Controller app;
    app.start();
    
}
