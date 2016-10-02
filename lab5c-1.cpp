// Filename:   programname.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:
// ==================== header files ==================================
#include <iostream>    // for input/output
#include <iomanip>    // for output format 
#include <string>      // for string variables
#include <cctype>   //for is lower / to lower
using namespace std;
// =============== symbolic constants =================================
const float FOOTBALL_GAME_PRICE = 65.00;
const float AMUSE_PARK_PRICE = 55.49;
const float AFTER10_AMUSE_PARK_PRICE = 42.50;
const int PRICE_CHANGE_TICKET_AMOUNT = 10;
// ================= global data type declarations ====================
//input variables
//variables to be calculated/set
float ticket_counter;
//output variables
int ticket_amount; 
float budget;
char event_type;
float total_cost;
float budget_difference;
char refreshment_or_fundraiser;
// =================== function prototype =============================
void determineEventPrice(float, int, char, float&, float&, char&);
//======= main function algorithm ===========
int main() 
{

	//CASE1
	budget = 700;
	ticket_amount = 9;
	event_type = 'F';
	cout << "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	//Output
	cout << "Total Cost: " << total_cost << endl
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	
	
	//CASE2
	budget = 400;
	ticket_amount = 10;
	event_type = 'p';
	cout << endl << endl << "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	//Output
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	
	
	//CASE3
	budget = 1200;
	ticket_amount = 25;
	event_type = 'f';
	cout << endl << endl <<  "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	//Output
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	
	
	//CASE4
	budget = 900;
	ticket_amount = 11;
	event_type = 'P';
	cout << endl << endl <<  "Budget = " << budget << endl
		  << "Ticket Amount = " << ticket_amount << endl
		  << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	
	//CASEOutput
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	
	
	//CASE5
	budget = 772.4;
	ticket_amount = 15;
	event_type = 'P';
	cout << endl << endl <<  "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	
	//Output
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	
	
	//CASE6
	budget = 975.00;
	ticket_amount = 15;
	event_type = 'F';
	cout << endl << endl <<  "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	
	//Output
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;



	//CASE7
	budget = 500;
	ticket_amount = 30;
	event_type = 'a';
	cout << endl << endl <<  "Budget = " << budget << endl
		 << "Ticket Amount = " << ticket_amount << endl
		 << "Event_type = " << event_type << endl << endl;
	//Call functions
	determineEventPrice(budget, ticket_amount, event_type,
	total_cost, budget_difference, refreshment_or_fundraiser);
	
	//Output
	cout << "Total Cost: " << total_cost << endl 
		 << "The difference between the budget and the total cost: " 
		 << budget_difference << endl << "Refreshment or Fundraiser: " 
		 << refreshment_or_fundraiser << endl << endl;
	
	return 0;
}



void determineEventPrice(float budget, int ticket_amount, 
char event_type, float& total_cost, float& budget_difference,
char& refreshment_or_fundraiser)
{
	//Calculate total_cost, ticket_counter, budget_difference, refreshment_or_fundraiser
	//calculate output
	 
	if (event_type == 'F' || event_type == 'f') 
	{
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
		if (ticket_amount > PRICE_CHANGE_TICKET_AMOUNT) 
		{
			ticket_counter = ticket_amount - PRICE_CHANGE_TICKET_AMOUNT;
			
			total_cost= (AMUSE_PARK_PRICE * PRICE_CHANGE_TICKET_AMOUNT) + 
			(AFTER10_AMUSE_PARK_PRICE * ticket_counter);
		}
			
		else
			total_cost= (AMUSE_PARK_PRICE * ticket_amount);
	}
	else
	{
		cout << "Error, Incorrect Event type." << endl;
		return;
	}

	budget_difference = budget - total_cost;
	if (budget_difference > 0)
		refreshment_or_fundraiser = 'R';
	else if (budget_difference >= 0)
		refreshment_or_fundraiser = 'S';
	else if (budget_difference < 0)
		refreshment_or_fundraiser = 'F';
}
