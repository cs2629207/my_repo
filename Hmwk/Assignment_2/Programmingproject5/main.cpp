/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ruwd
 *
 * Created on June 29, 2017, 2:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    int num_of_ppl,max_room_cap, how_mny_mre_ppl, how_mny_lss_ppl, user_selection; 
    do{
           
        cout<<"How many people are coming to this conference?\n";
        cin>> num_of_ppl; 

        cout << "What is the maximum  room capacity?\n";
        cin>> max_room_cap; 

        if (num_of_ppl <= max_room_cap){
            cout<<"Yes you can have that many people.:"<< num_of_ppl<<endl; 
            how_mny_mre_ppl=max_room_cap-num_of_ppl;
            cout<<"You can have this many more people at the conference.:"<< how_mny_mre_ppl<<endl;
        }
        else{
            cout<< "No you cannot have that many people in this conference.:"<< num_of_ppl<<endl;
            how_mny_lss_ppl= max_room_cap - num_of_ppl;
            cout<<"You need to take this many people out of the conference.:"<<how_mny_lss_ppl<<endl;
        }

        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
    }while (user_selection==1); 
   
    return 0;
}

