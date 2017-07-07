/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 10:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
  
    
    int user_selection; 
    do{
        cout<<"welcome to the e^x program";
        int x=0;
        long double total=0.0;
        cout<<"please enter a value for x";
        cin>>x;
        cout<<"you have entered:"<<x<<" for x"<<endl;
    	
        cout<<"using the math library your value for e^x is:"<<exp(x)<<endl;

        cout<<"now to calculate with loop code:"<<endl;
        for (int i = 99; i > 0; --i )
        total = 1 + x * total / i;
        cout<<"the total is:"<<total<<endl;
        
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
    }while (user_selection==1);
    
    return 0;
}

