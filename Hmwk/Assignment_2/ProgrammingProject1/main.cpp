/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on June 28, 2017, 3:55 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   int user_selection, amnt_of_cans_2_kill_you;
   double user_req_weight,
          art_sweet_2_kill_mouse=5.0,
          mass_mouse=35.0,
          w_of_dieter=45400.0,
          art_sweet_2_kill_you,
          soda_pop=350.0;

   const double amt_of_art_sweet_per_can_soda = 0.001;
    do{
        
       cout<<"What is your requested weight (in grams)? Press enter.\n";
       cin>> user_req_weight;
       art_sweet_2_kill_you= (user_req_weight*art_sweet_2_kill_mouse/mass_mouse);
       cout<<" This is the amount of sweetener that will kill you:"<<art_sweet_2_kill_you<<endl;
       amnt_of_cans_2_kill_you=art_sweet_2_kill_you*amt_of_art_sweet_per_can_soda;
       cout<< "This is the amount of cans of diet soda that will kill you:"<<amnt_of_cans_2_kill_you<<endl;
        
        
       cout<<"1 to repeat program\n";
       cout<<"2 to exit program\n";
       cout<<"Please select an integer 1 through 2.\n";
       cin>>user_selection;
        
        
    }while (user_selection==1);

    return 0;
}

