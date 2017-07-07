/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 26, 2017, 1:46 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*The purpose of this program is calculate the distance that an object fell
 * during free fall.
 * 
 */
int main(int argc, char** argv) {
    //In this line acceleration is defined as a float and has a value assigned.
    //Time is also assigned as a float as well as distance.
    float acceleration=32.0,mytime=0.0,distance=0.0;
    //The user will enter a value in seconds when prompted to.
    cout<<"Enter the time in seconds how long the object took to fall. Then press enter.\n";
    cin>> mytime;
    
    distance=(acceleration * mytime*mytime)/2.0;
    //The program will then display the output using this formula.
    
    cout<< "This is how far your object traveled in feet per second:"<<distance<<"\n";
     return 0;
}

