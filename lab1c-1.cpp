// Filename:   lab1c-1.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
/* Problem Description: Traci, the ACM treasurer, needs help
     with the budget for the annual ACM meeting. She wants to order 
     food for all members attending the meeting. A medium pizza has 6 
     slices and costs $7.99. Write an app to help her. The app should
     read in the amount of money she has in the budget for pizza and
     the number of people to feed. Determine and print the number 
     pizzas she can purchase and the number of slices each person 
     will have. 
*/


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cmath>      // for math functions
#include <string>
using namespace std;  //for cin cout functions
// =============== symbolic constants ==============================
const int  MED_PIZZA_SLICE_NUM = 6;
const float  MED_PIZZA_PRICE = 7.99;
// ================== data type declarations =======================
float budget;
int people_to_feed;

int pizza_purchase_amount;
int slice_per_person;


string pizzas = " pizzas";
//Put period because slices is normally at the end of the sentence in this problem.
string slices = " slices.";

// =================== function prototype ==========================

int main()
{
   // data declarations
  //system("clear");
 // initialize / read in input
 
	cout << "The app should read in the amount of"
	<< " money she has in the budget for pizza and"
	<< " the number of people to feed" << endl;
	
	cout << "How much money does she have in the"
	<< " budget? " << endl <<"$";
	cin >> budget;
	
	cout << endl << "How many people does she need to feed? "
	<< endl;
	cin >> people_to_feed;

 // calculate output
	//amount of pizzas we can buy
	pizza_purchase_amount = floor(budget / MED_PIZZA_PRICE);
	//amount of slices in pizza times pizza purchase amount divided by people who want to eat
	slice_per_person = floor(  (pizza_purchase_amount * 
	MED_PIZZA_SLICE_NUM )  /  people_to_feed );
	
	//changes case from plural to singular
	if (pizza_purchase_amount ==  1) 
		pizzas = " pizza";
	//changes case from plural to singular		
	if (slice_per_person == 1)
		slices = " slice."; 


 // display output
	cout << endl << "There will be " << pizza_purchase_amount
	<< pizzas << " and each person will get " << slice_per_person
	<< slices << endl; 



	return 0;
}// end main


