/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 10:02 PM
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
	int x,y,z,a,number;
        cout<<"please enter a 4 digit arabic year between 1000 and 3000:";
        cin>>number;
        x = number/1000 %10;  //thousand
        y = number/100 %10;  //hundread
        z = number/10 % 10;  //tens
        a = number % 10; //ones
        cout<<"You have entered:"<<x<<y<<z<<a<<endl;
        
        if(x == 1)
            cout<<"M";
        else if(x==2)
            cout<<"MM";
        else if(x==3)
            cout<<"MMM";
        else
            cout<<"big problem Dr. Jones";
        
        if(y==1)
            cout<<"C";
        else if(y==2)
            cout<<"CC";
        else if(y==3)
            cout<<"CCC";
        else if(y==4)
            cout<<"CD";
        else if(y==5)
            cout<<"D";
        else if(y==6)
            cout<<"DC";
        else if(y==7)
            cout<<"DCC";
        else if(y==8)
            cout<<"DCCC";
        else if(y==9)
            cout<<"CM";
        else
            cout<<"no time for love dr. jones";
                    
        if(z==1)
            cout<<"X";
        else if (z==2)
            cout<<"XX";
        else if (z==3)
            cout<<"XXX";
        else if (z==4)
            cout<<"XL";
        else if (z==5)
            cout<<"L";                    
        else if (z==6)
            cout<<"LX";
        else if (z==7)
            cout<<"LXX";
        else if (z==8)
            cout<<"LXXX";
        else if (z==9)
            cout<<"XC";
        
        if(a==1)
            cout<<"I";
        else if (a==2)
            cout<<"II";
        else if (a==3)
            cout<<"III";
        else if (a==4)
            cout<<"IV";
        else if (a==5)
            cout<<"V";                    
        else if (a==6)
            cout<<"VI";
        else if (a==7)
            cout<<"VII";
        else if (a==8)
            cout<<"VIII";
        else if (a==9)
            cout<<"IX";
                 
        cout<<"\n1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);
    
    
    
    return 0;
}

