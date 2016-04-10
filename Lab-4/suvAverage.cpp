// Filename:   suvAverage.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:
// ==================== header files ==================================
#include <iostream>    // for input/output
#include <iomanip>    // for output format & for setprecision
#include <string>     // for string variables
#include <cctype>   //for is lower / to lower
using namespace std;
// =============== symbolic constants =================================
const char SENTINEL = '#';
const char SUV = 'u';
const char SEDAN = 's';
const int TWO_DECIMALS = 2;
// ================= global data type declarations ====================
// =================== function prototype =============================

int main()
{
	
	//=== data declarations ===
	
	//input variables
	int manufacture_year = 0;
	char car_type = '.';
	
	//variables to be calculated/set
	float car_cost = 0;
	float avg_cost_suv = 0;
	float suv_total_count = 0;
	float suv_total_cost = 0;

//===================== main function algorithm =======================

	// initialize / read in input
	//initialize manufacture_year, car_type
	cout << "Enter car type(S/s-for suv, U/u-for sedan, #-to exit: ";
	cin >> car_type;
	
	//while the input stream for car_type doesn't equal # the below code executes
	while (car_type != SENTINEL)
	{
		// calculate output
		//calculate avg_cost_suv, suv_count, suv_cost
		cout << "Enter the cost for the SUVs: ";
		cin >> car_cost;
			
		cout << "Enter the manufacture year for the SUV: ";
		cin >> manufacture_year;
		
		if (tolower(car_type) == 'u')
		{
			suv_total_cost = (suv_total_cost + car_cost);
			suv_total_count = suv_total_count + 1;
		}
		
		//while the input stream for car_type doesn't equal # the below code executes
		cout << "Enter car type(S/s-for suv, U/u-for sedan, #-to exit: ";
		cin >> car_type;
	}
	
	//If no suvs were inputted, the average cost would be 0. This 
	//prevents a division of zero, as that would creat a runtime error.
	if (suv_total_count == 0)
		avg_cost_suv = 0;
		
	else
		avg_cost_suv = (suv_total_cost / suv_total_count);





	// display output
	//display avg_cost_suv
	cout << fixed << showpoint << setprecision(TWO_DECIMALS) 
	<< "The average cost for SUV style vehicles: $";
	
	cout << avg_cost_suv;
	
	return 0;
}// end main


