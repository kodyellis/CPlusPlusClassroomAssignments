// Filename:   lab1c-2.cpp
// Name: Ms. Thomas
// Class: CSCI 210 Programming I
/* Problem Description: The manager of a TU Games Online wants you 
     to design a web site that takes customer orders. There are three
     types of games sold on the website  Madden NFL, Call of Duty,
     and Halo. When the customer visits the video gamer’s web site, 
     it asks the user to enter the number of games ordered in each 
     of the three categories. The price per game is shown in 
     the chart below:


      Game Type                   Cost per game
        Madden NFL                    $59.99
        Call of Duty (package)        $179.99
        Halo                          $99.99


Next, calculate and print the total sale amount, the total number of 
games purchased, and the average cost per game. Display the results 
in the format shown below: 

 
Total Number of Games Purchased: XXXX
Total Sale Amount: $YYY.YY
Average cost per game: $ZZZ.Z
*/


// ==================== header files ===============================
#include <iostream>    // for input/output
#include <cmath>      // for math functions
#include <iomanip>
#include <string>
using namespace std;
// =============== symbolic constants ==============================
const float NFL_PRICE = 59.99;
const float COD_PRICE = 179.99;
const float HALO_PRICE = 99.99;
// ================== data type declarations =======================
int nfl_amount; 
int cod_amount;
int halo_amount;
int total_num_games;
float total_cost;
float avg_cost;
// =================== function prototype ==========================

int main()
{
   // data declarations
	//system("clear");



 // initialize / read in input
	cout << endl << "Enter the amount of Madden NFL games you"
	<< " want to order: " << endl;
	cin >> nfl_amount;

	cout << endl << "Enter the amount of Call of Duty (Packages)"
	<< " you want to order: " << endl;
	cin >> cod_amount;

	cout << endl << "Enter the amount of Halo games you want to order: " 
	<< endl;
	cin >> halo_amount;



 // calculate output
	total_num_games = nfl_amount  +  cod_amount  +  halo_amount;

	total_cost =  (nfl_amount  *  NFL_PRICE) +  (cod_amount  * COD_PRICE)  +  (halo_amount  * HALO_PRICE);
 
	avg_cost =  (total_cost / total_num_games);



 // display output
	cout << endl << endl << "Total Nmber of Games Purchased: " << total_num_games 
	<< endl;
	cout << fixed << setprecision(2) << "Total Sale Amount: " << total_cost << endl;
	cout << fixed << setprecision(2) << "Average Cost Per Game: " << avg_cost << endl
	<< endl;



	return 0;
}// end main



