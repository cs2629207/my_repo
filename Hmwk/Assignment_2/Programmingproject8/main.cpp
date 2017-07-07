/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 29, 2017, 10:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
	int amount_of_months_to_pay_off_loan =0;//output
	double total_interest_payed=0.0,//output
	interest_rate_per_yr=0.18,
	interest_rate_per_month=0.015,
	monthly_payments=50.0,
	cost_of_stereo=1000.0,
	amount_of_debt,//c
	interest_this_month;//c

	cout<<"Calculating the amount of months to pay off loan and the total interest payed"<<endl;
	
	amount_of_debt = cost_of_stereo;
	
	while(amount_of_debt > 0)
	{
		amount_of_months_to_pay_off_loan++;
		//calculate interest and amount payed
		interest_this_month=amount_of_debt * interest_rate_per_month;
		total_interest_payed += interest_this_month;
		amount_of_debt = amount_of_debt - (monthly_payments-interest_this_month);
				
	
	}

	cout<<"the amount_of_months_to_pay_off_loan is:"<<amount_of_months_to_pay_off_loan<<" and the total_interest_payed is:"<<total_interest_payed<<endl;

    return 0;
}

