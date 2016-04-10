// Filename:   lab5c-1.cpp
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


//===================== main function algorithm =======================

	// initialize / read in input
	//read movie_type, movie_count, movie_spending_amount
	cout << "Enter preferred way to watch movies (C/c for cable TV,"
	<< " I/i-for Internet Service, D/d - Buy/Rent DVD, S/s-to stop: ";
	cin >> movie_type;
	
	//while the input stream for movie_type doesn't equal S or s the 
	//below code executes
	while (tolower(movie_type) != SENTINEL_STOP)
	{
		// calculate output
		// read movie_count, movie_spending_amount 
		/* calculate percent_students, dvd_people, total_movie_count,
		// num_people, avg_movies
		*/
		cout << "How many of these movies have you watched in the"
		<< " last 12 months?: ";
		cin >> movie_count;
		
		cout << "Enter the amount of money you spent watching these movies: ";
		cin >> movie_spending_amount;
		
		
		if (movie_spending_amount > OVER_AMOUNT)
		{
			percent_students++;
		}
		
		if (tolower(movie_type) == BUY_RENT_DVD)
		{
			dvd_people++;
		}
		
		total_movie_count = total_movie_count + movie_count;
		num_people++;
		
		
		cout << endl << endl;
		cout << "Enter preferred way to watch movies(C/c for cable TV,"
		<< "I/i-for Internet Service, D/d - Buy/Rent DVD, S/s-to stop: ";
		cin >> movie_type;
		
		
	}
	
	
	if (total_movie_count == 0)
		avg_movies = 0;
	else
		avg_movies = total_movie_count / num_people;
		
		
	//Computes the a displayable percent of students who spent over $75 on movies
	if (num_people != 0)
	{
	total_percent_students= ( (percent_students / num_people) * 100);
	}
	
	// display output
	//display dvd_people, avg_movies, total_percent_students
	cout << endl;
	cout << (int)dvd_people << " student(s) prefer to buy or rent DVDs." << endl;

	cout << "The average number of movies watched (in the last 12 months): " 
		 << setprecision(ONE_DECIMAL) << (int)avg_movies << endl;
		 
	cout << (int)total_percent_students << "% of the students have spent over"
		 << " $75 on movies";
		 
	cout << endl;
	
	return 0;
}// end main


