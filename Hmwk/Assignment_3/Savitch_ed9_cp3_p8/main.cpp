/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 9:40 PM
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
   
    cout<<"welcome to the pi appx program"<<endl;
    
    do{
	
        int n =0;
        double pi =0.0;
        cout<<"Please enter a value for n:";
        cin>>n;
        cout<<"\nyou have entered:"<<n<<endl;

        for(int i=0;i<n;i++)
        {
            pi += 4 * ((pow(-1,i))/(2*i+1));
        }
        cout<<"Here is the value of pi that you have appx:"<<pi<<endl;
                
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);
    
    
    return 0;
}

