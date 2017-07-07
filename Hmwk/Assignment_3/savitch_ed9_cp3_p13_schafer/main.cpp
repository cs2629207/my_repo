/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 8:41 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//riddle me this batman

    int x,y,z,a,number;
    cout<<"Calculating a four digit number";
    //obviously the upper and low bound don't work as the number but lets loop anyways
    for (int number =0;number <9999; number++)
    {
            x = number/1000 %10;  //thousand
            y = number/100 %10;  //hundread
            z = number/10 % 10;  //tens
            a = number % 10; //ones

              

            //so if all four digits are different
            if(x != y && x != z && x != a &&
              y != z && y != a &&
              z != a)
            {
                    //digit in 1000 is 3 times the digit in tens place
                    if(x == z*3) //must be 3==1 or6==2 or 9==3 
                    {
                            if(number %2) //ODD then must be even so, go to else
                            {
                                    if(x+y+z+a ==27)//then we must have found your number :)
                                            cout<<"the answer to the Riddler's puzzle is the number:"<<number<<endl;
                            }
                            else{}
                    }
            }
    }
    return 0;
}

