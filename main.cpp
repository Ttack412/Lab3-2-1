/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ttackett
 *
 * Created on September 11, 2017, 1:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std; 

int main(void) {
    
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 }; 
int n = sizeof(vector) / sizeof(vector[0]);

//creates an int and a pointer
//Sets the pointer to the first number  in the array
int Smallest, *pointer = vector; 
//sets the smallest int to the pointer
Smallest = *pointer;

for(int i; i < n; i++)
{
    //checks for the smallest number
    if(Smallest > *pointer)
    {
        //moves the pointer to the next number
        *pointer++;
        //sets new smallest
        Smallest = *pointer;
    }
    else
    {
        *pointer++;
    }
}

cout << "The smallest number is " << Smallest;

return 0; 
}

