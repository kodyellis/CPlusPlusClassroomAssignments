// Filename:   lab6c-2c.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:Write a program that processes CS students’
/*
 *  
Movie Watching information. For each student, read in the in the number 
of movies he or she has watched in the last 12 months, the amount of 
money spent on watching these movies, and the preferred way to watch 
movies (C/c-cable TV, I/i-Internet Service (i.e. Netflix, Amazon ), 
D/d-Buy/Rent DVD, or S/s-stop). Continue to prompt for user input until 
the user enters Stop for the preferred method to watch movies. 


Calculate and display the following:

The number of students who prefer to buy or rent DVDs.
Average number of movies watched by students in the last 12 months 
(accurate to 1 decimal place)
The percent of students who spend over $75 on movie watching.
*/
// ==================== header files ==================================
#include <iostream>    // for input/output
#include <iomanip>    // for output format & for setprecision
#include <string>     // for string variables
#include <cctype>   //for is lower / to lower
using namespace std;
// =============== symbolic constants =================================
const char CABLE_TV = 'c';
const char INTERNET = 'i';
const char BUY_RENT_DVD = 'd';
const char SENTINEL_STOP = 's';
const float OVER_AMOUNT = 75;
const int ONE_DECIMAL = 1;
// ================= global data type declarations ====================
// =================== function prototype =============================
void readData(char&);
void calculateData(char&, int&, float&, float&, int&, float&, float&, 
float&, float&);
void displayData(int, float, float);
// ====================main function =================================

int main()
{
	//=== data declarations ===
	
	//input variables
	char movie_type = '.';
	int movie_count = 0;
	float movie_spending_amount =0;
	
	
	//variables to be calculated/set
	int dvd_people = 0;
	float total_movie_count = 0;
	float num_people = 0;
	float avg_movies = 0;
	float percent_students = 0;
	float total_percent_students = 0;



	readData(movie_type);
	cout << "Event Type: " << movie_type << endl;

	calculateData(movie_type, movie_count, movie_spending_amount, 
	percent_students, dvd_people, total_movie_count, num_people,
	avg_movies, total_percent_students);
	
	displayData(dvd_people, avg_movies, total_percent_students);
	
	return 0;
}// end main


void readData(char& type)
// Purpose: This function reads in the event type
// Precondition: 
// Postcondition: The type is entered from the keyboard 
//           output parameters - (char)type

{
	cout << "Enter preferred way to watch movies (C/c for cable TV,"
	<< " I/i-for Internet Service, D/d - Buy/Rent DVD, S/s-to stop: ";
	cin >> type;
}


void calculateData(char& type, int& count, float& expense, 
float& percent, int& dvd, float& total_count, 
float& number, float& average, float& total_percent)
// Purpose: This function computes the weekly salary
// Precondition: The type, count, and expense  have been read from the keyboard.       
// Postcondition: Everything is computed.
//output parameters -(char) type, (int) count, (float) expense, 
//       (float) percent, (int) dvd, (float) total_count, 
//       (float) number, (float) average, (float) total_percent

{
   cout << "function calculateData is under construction" << endl;
}


void displayData(int dvd, float average, float total_percent)
// Purpose: This function displays the output
// Precondition: dvd, averagem, and total_percent are computed. (input parameters - 
//                  dvd (int), average (int), and total_percent(float)
// Postcondition: dvd, average,and total_percent, have been printed on 
//                   the computer screen.
//output parameters - (int) dvd, (float) average, (float) total_percent

{
   cout << "function displayData is under construction" << endl;
}
