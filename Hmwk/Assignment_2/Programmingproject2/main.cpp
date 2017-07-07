
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rChelsea Schafer
 *
 * Created on June 28, 2017, 3:55 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    int user_selection; 
    const double pay_increase_percent = .076;
    double retroactive_pay, new_annual_salary, new_monthly_salary,prev_annual_salary;
    
    do{
       

cout<<"what was your previous annual salary?:";
cin>>prev_annual_salary;

retroactive_pay =pay_increase_percent * (prev_annual_salary/2);
new_annual_salary = (pay_increase_percent * prev_annual_salary) + prev_annual_salary;
new_monthly_salary = new_annual_salary/12;

cout<<"you are owed:"<<retroactive_pay<<" in retroactive pay"<<endl;
cout<<"your new annual salary is:"<<new_annual_salary<<endl;
cout<<"your new monthly salary is:"<<new_monthly_salary<<endl;
       
cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);

    return 0;
}
