/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 10:39 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int user_selection; 

    
    
    do{
        
        int n,pounds_o_crud;
        cout<<"please enter a number n for the amount of days";
        cin>>n;
        cout<<"you have entered:"<<n<<"this many day"<<endl;
        n/=4;
        
        cout<<"please enter a starting amount of pounds of the Crud Population";
        cin>>pounds_o_crud;
        cout<<"you have entered:"<<pounds_o_crud<<" this many pounds of crud"<<endl;
       
	if (n == 0) {
            return 0;
        }
        
        if (n == 1){
            return 1;
        }

        int first = 0;
        int second = 1;
        int nth = 1;

        for (int i = 2; i <= n; i++) {
            nth = first + second;
            first = second;
            second = nth;
        }
        
        pounds_o_crud = pounds_o_crud * nth;
        cout<<"After:"<<n*4<<" amount of days, the amount of crud has grown to:"<<pounds_o_crud<<" amount of pounds"<<endl;
	//put_logic_here
	
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);
    return 0;
}

