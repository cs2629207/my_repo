/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 28, 2017, 6:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   int user_selection; 
    double intrest,
           face_value,
           
           amnt_cons_needs,
           interest_rate,
           drtion_of_loan_mnths,
            monthly_loan_payment;
    
    
    do {
        cout<<"What is the amount you need in dollars?\n";
        cin>> amnt_cons_needs;
        cout<< " What is your interest rate for this loan?\n";
        cin>> interest_rate;
        cout<< "How long do you have to pay off this loan in months?\n";
        cin>> drtion_of_loan_mnths;
                
       monthly_loan_payment=(amnt_cons_needs*interest_rate)/drtion_of_loan_mnths;
       cout<<"This is your monthly payment:"<<monthly_loan_payment<<endl;
        face_value=monthly_loan_payment*drtion_of_loan_mnths;
        cout<<"This is the face value of your loan:"<<face_value<<endl;
   
        
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
    } while (user_selection==1);
        
        
    return 0;

}