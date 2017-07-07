/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 25, 2017, 9:28 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* The purpose of this program is to output the sum and product of two integers.
 * 
 */
int main(int argc, char** argv) {
    // Two integers x and y are defined
    int x=0,y=0;
    // The user will input an integer.
    cout << "Input an integer then press enter\n";
    cin >> x;
    //The user will then input another integer.
    cout << "Input another integer then press enter\n";
    cin >> y;
    //The program will then display the sum of two integers
    cout << "This is the sum of your two integers\n";
    cout << x+y << endl;
    //The program will display the product as well of the two integers.
    cout << "This is the product of your two integers\n";
    cout << x*y << endl;
    
    return 0;
}

