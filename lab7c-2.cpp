// Filename:   lab7c-2.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description: //   Write a program that simulates rolling one 
//die 18 times. The program prints the face-up value for each roll and 
//the percent of face-up values which are odd. 
// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cstdlib>
#include <iomanip>    // for output format
//#include "utility.h"  // for random()
using namespace std;
// =============== symbolic constants ==============================
const int MAX_ROLLS = 18;
const int MIN_VALUE = 1;
const int MAX_VALUE = 6;
const int DECIMAL = 2;
const int MAXNUMBER = 200;
const char EOLN = '\n';
// =================== function prototype ==========================
void setRandomSeed();          // set a new seed for random numbers
int random(int);               // returns an integer between 0 and n-1
void clearScreen();            // clear screen
void pauseScreen();		       // pause screen

void computePercentage(int &);
void displayResult(int);

int main()
{
   int even_sum_count;

   setRandomSeed();
   computePercentage(even_sum_count);
   displayResult(even_sum_count);

   return 0;
}// end main


void computePercentage(int &even_sum_count)
// purpose: compute the number of times the sum of the face up values of
//    that have face-up values of die each dice are even.
// preconditions: percent has been defined between 0% and 100%.
// postconditions: the number of times the sum of the face up values of
//    that have face-up values of die each dice are even.
{
   int die_one;
   int die_two;

   while (die_one != die_two)
   {
      die_one = random(MAX_VALUE) + MIN_VALUE;
      die_two = random(MAX_VALUE) + MIN_VALUE;
      cout << "("
           << die_one
           << ","
           << die_two
           << ")"
           << endl;
      if ((die_one + die_two) % 2 == 0)
         even_sum_count++;
   }
}  // end of computePercentage


void displayResult(int even_sum_count)
// purpose: display the number of times the sum of the face up values of
//        that have face-up values of die each dice are even.
// preconditions: percent has been defined between 0% and 100%.
// postconditions: the number of times the sum of the face up values of
//        that have face-up values of die each dice are even.
{
	cout << fixed << showpoint;
   cout << setprecision(DECIMAL)
        << even_sum_count
        << " times in which the sum of the face up values of each dice1" 
        << "and dice2 are even." 
        << endl;
}


void pauseScreen()
// purpose: halt output display to the computer screen
// precondition: none
// postcondition: the screen will pause if no new line character is in
//			the keyboard buffer
{
    cout << endl 
	 << "Press the <enter> key to continue.... " 
	 << endl;
    cin.ignore(MAXNUMBER, EOLN);
}


void clearScreen()
// purpose: clear screen
// preconditions: none
// postconditions: screen is cleared
{
   system("clear");         // make a system call to clear screen
}  // end of clearScreen


void setRandomSeed()
// purpose: let user set a new seed to generate a different sequence
//          of pseudo random numbers.
// preconditions: none.
// postconditions: a new seed is set for generating a new sequence
//          of pseudo random numbers.
{
   int seed;

   //cout << "Enter a new seed for random number generation: ";
   //cout << "Pick a random number: ";
   cout << "It's your time to roll the die. Choose a lucky number!  ";
   cin >> seed;
   srand(seed);
 
}  // end of setRandomSeed


int random(int n)
// purpose: generate a pseudo random integer between 0 and n-1
//          inclusive.
// preconditions: n is positive.
// postconditions: a pseudo random integer between 0 and n-1 inclusive
//          is retruned by the function.
{
   return rand() % n;
}  // end of random
