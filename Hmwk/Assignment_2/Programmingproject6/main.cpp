/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 29, 2017, 3:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    int user_selection, hrs_wkd, num_of_dependas,extra_hrs=0; 
    double state_inc_tax=0.05,fed_inc_tax=0.14,uni_dues=10.00,soc_sec=0.06,dependa_pay=35.00,
           gross_pay,pay_rate=16.78, gross_ot_pay, ttl_pay=gross_ot_pay+gross_pay, gross_pay_dependa,ttl_pay_tax, ttl_pay_tax_ot;

    cout<<"How many dependents do you have?:";
    cin >>num_of_dependas;
    cout<<"\nHow many hours did you work?:";
    cin >> hrs_wkd;
    cout<<endl;
    
    do{
        //hrs_per_pay logic
        if (hrs_wkd<=40){
            gross_pay=pay_rate*hrs_wkd;
            cout<<"This is your pay since you worked 40 or less hours this week.:"<<gross_pay<<endl;
            ttl_pay=gross_pay;
        }
        else{
            cout<<" You worked more than 40 hours this week\n";
            gross_pay=pay_rate*40;
            extra_hrs = hrs_wkd -40;
            gross_ot_pay=extra_hrs*25.17;
            ttl_pay=gross_ot_pay+gross_pay;
            cout<<"This your gross pay with overtime because you worked more than 40 hours this week.:"<<ttl_pay<<endl;
        }
        
        //dependa logic
        if( num_of_dependas>3){
            ttl_pay=ttl_pay-35.00;
            cout<<"This is your total gross pay because your have 3 or more dependents.:"<< ttl_pay<<endl;
        }
  
        ttl_pay_tax = pay_rate*hrs_wkd-state_inc_tax-state_inc_tax-uni_dues-soc_sec;
        cout<<"This is your standard pay after taxes.:" << ttl_pay_tax <<endl;
        ttl_pay_tax_ot= ttl_pay-state_inc_tax-state_inc_tax-uni_dues-soc_sec;
        cout<<"This is your pay with overtime after taxes.:"<< ttl_pay_tax_ot<<endl;
        //output

        
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
    }while (user_selection==1);
    return 0;
}

