// Filename: lab3c-1.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
/* Problem Description:Alex has won a shopping spree at the CS campus 
* bookstore. Alex can select either books or accessories; however, he 
will be given a maximum amount of $200 he can spend on accessories. 
* Write a program that prompts the user to enter the item type 
(B-books or A-accessories) and item cost from the keyboard. Continue 
* to input and process purchases until 6 books have been purchased. 
* 
Calculations:
* 	Compute and display the total amount spent. 
* 	Print a message to indicate the total amount spent of accessories and if he 
*	spent more than or less than the accessory spending limit.
* 	Determine and print the smallest amount spent.
*/

// ==================== header files ===============================
#include <iostream>    // for input/output
#include <iomanip>    // for output format
#include <string>      // for string variables
#include <cfloat>    //for obtaining the minimum/max of floats
using namespace std;
// =============== symbolic constants ==============================
const float MAX_ACCESSORY_AMOUNT = 200.00;
const int BOOK_COUNT_SENTINEL = 6;
const int TWO_DECIMALS = 2;
// ================= global data type declarations ====================
// =================== function prototype ==========================

int main()
{
	//=== data declarations ===
	
	//data-check variables
	char book_type1 = 'b';
	char accessory_type1 = 'a';
	
	
	//input variables
	char item_type = '.';
	float item_cost = 0;
	
	
	//variables to be calculated/set
	float smallest_amount = FLT_MAX;
	float total_amount = 0;
	float book_count = 0;
	float accessory_amount = 0;
	
	//conditional string variables
	string less_than1 = " is less than";
	string matches1 = " exactly matches";
	string more_than1 = " is more than";
	
	
	//=== main function algorithm ===
	while (book_count != BOOK_COUNT_SENTINEL) 
	{ 
		// initialize / read in input
		//read item_type and item_cost
		cout << endl << "Enter an item type (B or b == book and  A or a = accessory)  ";
		cin >> item_type;
		cout << "Enter item cost: $";
		cin >> item_cost;
		
		// calculate output
		//calculate total_amount, book_count, acessory_amount and smallest_amount
		total_amount = total_amount + item_cost;
		
		if ( tolower(item_type) == book_type1 )
			book_count++;
		
		if ( tolower(item_type) == accessory_type1 )
			accessory_amount = accessory_amount + item_cost;
		
		//This gives whatever is the smallest amount entered and sets it 
		//in the smallest_amount variable.
		if ( item_cost < smallest_amount )
			smallest_amount = item_cost;
	}


	// display output
	//display total_amount, accessory_amount, less_than1, matches1,  more_than1
	cout << endl << fixed << showpoint << setprecision(TWO_DECIMALS) <<"Total Amount Spent: $" << total_amount;
		  
	cout << endl << "Alex spent $" << accessory_amount << " on accessories which";
		
	/*This is a conditional string.Depending on if you went above or 
	* below your spending limit, the program will output the
	* corresponding message.
	*/
	if ( accessory_amount < MAX_ACCESSORY_AMOUNT )
		cout << less_than1;
		
	else if ( accessory_amount == MAX_ACCESSORY_AMOUNT )
		cout << matches1;
		
	else
		cout << more_than1;
	
	cout << " his spending limit";
	
	
	cout << endl << "Smallest purchase amount: $" << smallest_amount << endl;
	return 0;
}// end main


