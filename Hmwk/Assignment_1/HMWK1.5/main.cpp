/* 
 * File:   main.cpp
 * Author: Chelsea Schafer
 * Created on June 26, 2017
 * Purpose:  Big Characters
 */

#include <iostream> 

int main(int argc, char** argv) {
    //Variables are declared
    char c;
    
    std::cout<<"Welcome to the letter program"<<std::endl;
    std::cout<<"Please enter a character to use for displaying the Big letter :";
    std::cin>>c;

    //Output the transformed data
    std::cout<<std::endl;
    std::cout<<"  "<<c<<c<<c<<std::endl;
    std::cout<<" "<<c<<"   "<<c<<std::endl;
    std::cout<<" "<<c<<std::endl;
    std::cout<<" "<<c<<std::endl;
    std::cout<<" "<<c<<std::endl;
    std::cout<<" "<<c<<"   "<<c<<std::endl;
    std::cout<<"  "<<c<<c<<c<<std::endl;
    
    return 0;
}