/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 10:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

     std::srand(std::time(0));
    
    int amt_games =10000,wins_per_stay=0,wins_per_move=0;

    //if choose to stay
    for (int game_num = 0; game_num < amt_games; ++game_num)
    {
      int win_door = rand()%3;
      int orig_door = rand()%3;
      int another_door;
      if (win_door == orig_door)
      {
        another_door = rand()%2;
        if (another_door >= win_door)
          ++another_door;
      }
      else{}
      if(orig_door == win_door)
          wins_per_stay++;
    }
    //if choose another door
    for (int game_num = 0; game_num < amt_games; ++game_num)
    {
      int win_door = rand()%3;
      int orig_door = rand()%3;
      int open_door;
      //open door part
      if (win_door == orig_door)
      {
        open_door = rand()%2;
        if (open_door >= win_door)
          ++open_door;
      }
      else{}
      
      int select_door;
      if (open_door == orig_door)
      {
        select_door = rand()%2;
        if (select_door >= win_door)
          ++select_door;
      }
      else{}
      
      if(select_door == win_door)
          wins_per_move++;
    }
    
    cout << "staying: " << 100.0*wins_per_stay/10000 << "%, changing: " << 100.0*wins_per_move/10000 << "%\n";
    return 0;
}