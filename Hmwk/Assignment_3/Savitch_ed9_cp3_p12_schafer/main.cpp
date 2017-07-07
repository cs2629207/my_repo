/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 8:50 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//23 game

//this should really be unsigned int! but whatever
//need to add the repeat game stuff (do/while)

    int user_selection;

        
    do{
	int number_of_tooth_picks = 23,num_to_draw=0,game_over_flag=0;
        cout<<"welcome to the 23 game"<<endl;
        while(number_of_tooth_picks >=0)
        {
                cout<<"Please pick the amount of toothpicks to draw that is less than the upward bound:"<<number_of_tooth_picks;
                cout<<" with the draw possible of 1-3:";
                cin>>num_to_draw;
                while(num_to_draw <=0 || num_to_draw > 3 || num_to_draw > number_of_tooth_picks)
                {
                        cout<<"you entered:"<<num_to_draw<<" which is a wrong amount to draw, please try again 1-3:";
                        cin>>num_to_draw;
                }
                cout<<"You have taken:"<<num_to_draw<<" sticks from the pile"<<endl;
                //now should have a good draw for player
                number_of_tooth_picks -=num_to_draw;

                if(number_of_tooth_picks == 0){
                        cout<<"The player has lost!"<<endl;
                        game_over_flag=1;
                }
                if(game_over_flag==1)
                {break;}
                
                //end player turn, start cpu
                if(number_of_tooth_picks ==1)//if one left comp takes and loses...
                {
                        number_of_tooth_picks --;
                        cout<<"The CPU has lost!"<<endl;
                        game_over_flag=1;
                }
                else if(number_of_tooth_picks ==2)
                {
                    number_of_tooth_picks--;
                    cout<<"The CPU has taken 1 stick"<<endl;
                }
                else if(number_of_tooth_picks ==3)
                {       
                    number_of_tooth_picks-=2;
                    cout<<"The CPU has taken 2 sticks"<<endl;         
                }
                else if(number_of_tooth_picks ==4)
                {   
                    number_of_tooth_picks-=3;
                    cout<<"The CPU has taken 3 sticks"<<endl;         
                }
                else
                {   
                    number_of_tooth_picks-=4-num_to_draw;
                    cout<<"The CPU has taken "<<4-num_to_draw<<" sticks"<<endl;                   
                }
                if(game_over_flag==1)
                {break;}
        }


        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);
    return 0;
}

