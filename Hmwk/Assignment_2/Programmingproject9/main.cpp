/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruwd
 *
 * Created on June 29, 2017, 10:45 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int sum_of_all_nums_les_zero=0,
     sum_of_all_nums_gtr_zero=0,
     sum_of_all_nums=0,
     the_entered_num;
    
    cout<<"please enter 10 numbers"<<endl;
    for(int i =0;i<10;i++)
    {
        cout<<"enter the number "<<i<<endl;
        cin>>the_entered_num;

        sum_of_all_nums += the_entered_num; 
        if(the_entered_num > 0)//then its positive
        {
            sum_of_all_nums_gtr_zero += the_entered_num;
        }
        else//must be negative
        {
            sum_of_all_nums_les_zero += the_entered_num;
        }
    }
    
    cout<<"this is the summation of all your numbers:"<<sum_of_all_nums<<endl;
    cout<<"this is the summation of all your positive numbers:"<<sum_of_all_nums_gtr_zero<<endl;
    cout<<"this is the summation of all your negative numbers:"<<sum_of_all_nums_les_zero<<endl;
    
    
    return 0;
}

