/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 29, 2017, 10:11 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    	double cost_of_item, 
	num_of_yrs_from_now_purchased,
	rate_of_inflation, //enter as percentage and convert
	estimate_cost_of_item;//output

	cout<<"Please enter the rate of inflation";
	cin>>rate_of_inflation;
	cout<<"\nplease enter the number of years from now purchased";
	cin>>num_of_yrs_from_now_purchased;

	
	rate_of_inflation = rate_of_inflation * .001;
	estimate_cost_of_item = cost_of_item;
	
	for(int i =0; i< num_of_yrs_from_now_purchased;i++)
	{
		estimate_cost_of_item = estimate_cost_of_item + rate_of_inflation*i*cost_of_item;
	}

	cout<<"The estimated cost of an item:"<<num_of_yrs_from_now_purchased<<"years from now, is:"<<estimate_cost_of_item<<endl;
    return 0;
}

