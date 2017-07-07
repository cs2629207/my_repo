/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 25, 2017, 10:46 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* The purpose of this program is to add up the monetary value of change to 
 * include quarters, dimes and nickels.
 * 
 */
int main(int argc, char** argv) {
    // In this line the number of quarters, dimes and nickles are defined.
    int number_of_quarters=0,number_of_dimes=0,number_of_nickles=0;
    //To be able to accurately calculate the amount a float was used.
    float Total_amount=0.0;
    
    //In this line the user is asked the amount of quarters. The user will then 
    //input their amount.
    cout<<" How many quarters do you have? Please enter amount.\n ";
    cin>> number_of_quarters;
    //In this line the user is asked how many dimes do they have, the user will 
    //then input their amount.
    cout<< "How many dimes do you have? Please enter amount.\n";
    cin>> number_of_dimes;
     //In this line the user is asked how many nickles they have, the user will
    // then input their total.
    cout<<"How many nickles do you have? Please enter amount.\n";
    cin>> number_of_nickles
   //In this line the output of the total will be displayed.         
   
    cout<<"This is the sum of your amount of change.\n";
    Total_amount = number_of_quarters*.25+number_of_dimes*.10+number_of_nickles*.05;
    cout<<Total_amount;       
    
    

    return 0;
}

