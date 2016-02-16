//
//  main.cpp
//  chapter2Cpp
//
//  Created by Gabriel Kavaloski on 2/15/16.
//  Copyright © 2016 Gabriel Kavaloski. All rights reserved.
//

#include <iostream>
#include <string>

int value{5}; //list initialization, or uniform initialization

int a = 5, b = 6;

int z(5); //implicit initialization

int y{8}; //uniform initialization

unsigned int shorty;

bool apple = true; //explicit initialization

//bool corn(false); //implicit initialization

bool berry{true}; //uniform initialization


int main()
{
    std::cout << "Enter a single digit integer " << std::endl;
    int x;
    std::cin >> x;
    
    bool prime(false); // This sets the bool variable to false
    bool corn(false);
    
    if (x == 2)
        prime = true; // will change to true if conditions met
    else if (x == 5)
        prime = true; // ^^
    else if (x == 7)
        prime = true; // ^^
        corn = true;
    std::cout << corn << std::endl;
    
    if (prime) //This condition assumes the "prime" bool is true. It always does
        std::cout << "the digit is prime" << std::endl;
    else // This executes if false.
        std::cout << "the digit is NOT prime\tYou have failed\n...again\vand again" << std::endl;
    if (corn)
        std::cout << "hello you" << std::endl;
    else
        std::cout << "nope man:" << std::endl;
    
    
    
    
}
