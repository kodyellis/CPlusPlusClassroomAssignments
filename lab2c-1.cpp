// Filename:   lab2c-1.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
/* Problem Description: Write an application program to determine 
* pricing for various events. First, your app should prompt the user 
to enter the field trip budget amount. Next, it should read in two 
* input data items: an integer value representing the number of 
tickets ordered for the event and a character value used to represent 
* the event type (P/p or F/f). Use the table below to calculate the 
amount owed for the month:


Event Type        Cost
(P/p)            Amusement Park	$55.99 per ticket for the first 10
                  tickets plus $42.50 per ticket exceeding 10
(F/f)           Pro Football Game	Flat rate - $65.00 per ticket
Anything else	Display “Event Type Unknown”
 
Display the event type description (“Amusement Park”, “Football Game”,
or “Event Type Unknown”) and amount owed with appropriate labels. Show 
amount owed accurate to 2 decimal places. Compute the difference between 
the amount owed and the field trip budget. Finally, display a message 
“$XX.XX left over for refreshments” when the amount owed does not exceed
the field trip budget, otherwise, “Start fund raiser to cover costs!”


	Sample input: 
		Enter budget amount: $300
		Enter item type (P/p  amusement park or F/f  football game): f
		Enter how many tickets ordered: 4

	Expected output:
          The cost for the Football Game tickets ordered: $260.00
		$40.00 left over for refreshments!
*/


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cmath>      // for math functions
#include <iomanip>    // for setprecision()
#include <string>    
using namespace std;
// =============== symbolic constants ==============================
const float FOOTBALL_GAME_PRICE = 65.00;
const float AMUSE_PARK_PRICE = 55.49;
const float AFTER10_AMUSE_PARK_PRICE = 42.50;
const int TWO_DECIMALS = 2;
const int PRICE_CHANGE_TICKET_AMOUNT = 10;
const string BIG_ERROR = "ERROR: Event Type Unknown. Unable to compute.";
// ================ global data type declarations =================
// =================== function prototype ============================


int main() 
{
	//=== data declarations ===

	//input variables
	int ticket_amount; 
	float budget;
	char event_type;

	//variables to be calculated/set
	string name_of_ticket;
	float total_cost;
	float ticket_counter;
	float refreshment_amount;
	float fundraiser_amount;

	//error flagger variable
	bool error_flag = 0;

//===================== main function algorithm =======================
// initialize / read in input
//Read in budget, ticket_amount, event_type

	cout << endl << "How much money do you have for the budget?" 
	<< endl;
	cin >> budget;

	cout << endl << "How many tickets do you want to get?" << endl;
	cin >> ticket_amount;
	 
	cout << endl <<  "What event type do you want? Enter P or p for"
	<< endl << "Amusement Park, and F or f for the Pro Football Game." 
	<< endl;
	cin >> event_type;


	//Calculate total_cost, ticket_counter, name_of_ticket, error_flag
	//calculate output
	 
	if (event_type == 'F' || event_type == 'f') 
	{
		name_of_ticket = "Football Game";
		total_cost= ticket_amount * FOOTBALL_GAME_PRICE;
	}

	else if (event_type == 'P' || event_type == 'p') 
	{
		/*Since the price changes after 10 tickets
		 * (aka PRICE_CHANGE_TICKET_AMOUNT constant), ticket counter 
		 * allows me use the remaining tickets after the price change has 
		 * been set. The price change after the 10 tickets is set in the 
		 * AFTER10_AMUSE_PARK_PRICE constant.
		 */

		name_of_ticket = "Amusement Park";
		
		if (ticket_amount > PRICE_CHANGE_TICKET_AMOUNT) 
			{
			ticket_counter = ticket_amount - PRICE_CHANGE_TICKET_AMOUNT;
			
			total_cost= (AMUSE_PARK_PRICE * PRICE_CHANGE_TICKET_AMOUNT) + 
			(AFTER10_AMUSE_PARK_PRICE * ticket_counter);
			}
			
		else
			{
			total_cost= (AMUSE_PARK_PRICE * ticket_amount);
			}

	}

	else 
	{
	/*sets to false
	 *this is set in just in case the user inputs a character other 
	 * than p, P, f, or F. 
	 */
		error_flag = 1;
	}
 

	//Display total_cost, refreshment_cost, fundraiser_amount, BIG_ERROR
	//display output
 

	//error checker conditional
	//If there are not any errors then the below code will be executed

	if (error_flag != 1) 
	{
		cout << endl << "The cost for the " << name_of_ticket 
		<< " tickets ordered: $" << total_cost;

		//This conditional checks if you went over budget or not.
		if (budget >= total_cost) 
		{
			//The code below executes if you didn’t go over budget.
			refreshment_amount = (budget - total_cost);
			cout << endl << "$" << fixed << setprecision(TWO_DECIMALS) 
			<< refreshment_amount << " left over to refreshments." 
			<< endl << endl;
		}
		
		else
		{
			//The code below executes if you went over budget.
			fundraiser_amount = total_cost - budget;
			cout << endl << endl << "You need to start a fundraiser to"
			<< " cover costs!!";

			cout << endl << "Estimated amount of money for fundraiser to"
			<< " raise: $" << fixed << setprecision(TWO_DECIMALS) 
			<< fundraiser_amount << endl << endl; 
		}
		
	}
	

	//This means that error_flag is false/ equals 1.
	//Which means what the user didnt input the correct event_type 
	//variable.

	else 
	{
		cout << endl << BIG_ERROR << endl << endl;
	}
	
	return 0;
}
//================== end of main function ===========================


