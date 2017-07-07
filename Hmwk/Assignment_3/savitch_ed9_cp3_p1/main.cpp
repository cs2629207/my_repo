/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 *
 * Created on July 5, 2017, 9:07 PM
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
	
        int call_start_1,call_start_2,length_of_call;
        char day_of_week_1,day_of_week_2,c;
        float cost_of_call,rate_of_call;
        
        cout<<"What day of the week did you call? (Mo  Tu  We  Th  Fr  Sa  Su):";
        cin>>day_of_week_1>>day_of_week_2;
        cout<<"You entered:"<<day_of_week_1<<day_of_week_2<<endl;
        cout<<"What time of day did you start call (enter a colon separated time:example 13:30):";
        cin>>call_start_1>>c>>call_start_2;
        cout<<"you entered:"<<call_start_1<<c<<call_start_2<<endl;
        cout<<"How long was the call (enter a integer for the amount of minutes):";
        cin>>length_of_call;
        cout<<"You entered:"<<length_of_call<<endl;
        
        if(day_of_week_1 == 'M' && day_of_week_2 == 'O' ||
                day_of_week_1 == 'm' && day_of_week_2 == 'o' ||
                day_of_week_1 == 'M' && day_of_week_2 == 'o' ||
                day_of_week_1 == 'm' && day_of_week_2 == 'O' )//then it must be mon
        {
            if(call_start_1 <8 || call_start_1 > 18)
                rate_of_call = 0.25;
            else
                rate_of_call = 0.40;
        }
        else if(day_of_week_1 == 'T' && day_of_week_2 == 'U' ||
                day_of_week_1 == 't' && day_of_week_2 == 'u' ||
                day_of_week_1 == 'T' && day_of_week_2 == 'u' ||
                day_of_week_1 == 't' && day_of_week_2 == 'U'  )//then it must be tues
        {
            if(call_start_1 <8 || call_start_1 > 18)
                rate_of_call = 0.25;
            else
                rate_of_call = 0.40;
        }
        else if(day_of_week_1 == 'W' && day_of_week_2 == 'E' ||
                day_of_week_1 == 'w' && day_of_week_2 == 'e' ||
                day_of_week_1 == 'W' && day_of_week_2 == 'e' ||
                day_of_week_1 == 'w' && day_of_week_2 == 'E'  )//then it must be weds
        {
            if(call_start_1 <8 || call_start_1 > 18)
                rate_of_call = 0.25;
            else
                rate_of_call = 0.40;

        }
        else if(day_of_week_1 == 'T' && day_of_week_2 == 'R' ||
                day_of_week_1 == 't' && day_of_week_2 == 'r' ||
                day_of_week_1 == 'T' && day_of_week_2 == 'r' ||
                day_of_week_1 == 't' && day_of_week_2 == 'R'  )//then it must be thurs
        {
            if(call_start_1 <8 || call_start_1 > 18)
                rate_of_call = 0.25;
            else
                rate_of_call = 0.40;

        }
        else if(day_of_week_1 == 'F' && day_of_week_2 == 'R' ||
                day_of_week_1 == 'f' && day_of_week_2 == 'r' ||
                day_of_week_1 == 'F' && day_of_week_2 == 'r' ||
                day_of_week_1 == 'f' && day_of_week_2 == 'R'  )//then it must be fri
        {
            if(call_start_1 <8 || call_start_1 > 18)
                rate_of_call = 0.25;
            else
                rate_of_call = 0.40;

        }
        else if(day_of_week_1 == 'S' && day_of_week_2 == 'A' ||
                day_of_week_1 == 's' && day_of_week_2 == 'a' ||
                day_of_week_1 == 'S' && day_of_week_2 == 'a' ||
                day_of_week_1 == 's' && day_of_week_2 == 'A'  )//then it must be sat
        {
            rate_of_call = 0.15;
        }
        else if(day_of_week_1 == 'S' && day_of_week_2 == 'U' ||
                day_of_week_1 == 's' && day_of_week_2 == 'u' ||
                day_of_week_1 == 'S' && day_of_week_2 == 'u' ||
                day_of_week_1 == 's' && day_of_week_2 == 'U' )//then it must be sun
        {
            rate_of_call = 0.15;
        }
        else{cout<<"errors in day of week entered please start over!"<<endl;}
        cost_of_call = rate_of_call * (float)length_of_call;
	cout<<"The total cost of you call is:"<<cost_of_call<<endl;
        
        cout<<"1 to repeat program\n";
        cout<<"2 to exit program\n";
        cout<<"Please select an integer 1 through 2.\n";
        cin>>user_selection;
        
        
    }while (user_selection==1);
    
    
    
    return 0;
}

