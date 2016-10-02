// Filename:   lab8c-1.cpp
// Name: Kody Ellis
// Class: CSCI 210 Programming I
// Section/Lab: Section 2 - Tuesday and Thursday
// Problem Description:
// ==================== header files ==================================
#include <iostream>    // for input/output
#include <iomanip>    // for output format & for 
#include <string>      // for string variables
#include <cfloat>    //for obtaining the minimum/max of floats
#include <cctype>   //for is lower / to lower
using namespace std;
// =============== symbolic constants =================================
// ================= global data type declarations ====================
// =================== function prototype =============================
void testDriver1();
void displayArray(const int[], int);
void onlyEven(const int[], int, int&);
//======= function algorithm ===
int main()
{
	testDriver1();
	return 0;
}// end main

void testDriver1()
{
	int list_size;
	int evenStatus;
	int numbers[5];
	
	
	
	
	
	
	//CASE1
	//When some numbers on the array are even and some are odd
	//input
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	
	list_size = 3;
	
	//Declares evenStatus to be anumber that doesn't indicate whether it's even or not.
	evenStatus = -1;
	cout << "Case1: " << endl << "Before Function Call: "  << endl <<  "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl;
	     
	//Call functions
	onlyEven(numbers, list_size, evenStatus);
	
	//output
	cout << endl << "After Function Call: " << endl << "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl << endl << endl << endl;
	     
	
	
	
	
	
	
	

	
	//CASE2
	//When all number on the array are odd
	//input
	numbers[0] = 11;
	numbers[1] = 22;
	numbers[2] = 33;
	numbers[3] = 44;
	
	list_size = 4;
	
	//Declares evenStatus to be anumber that doesn't indicate whether it's even or not.
	evenStatus = -1;
	cout << "Case2: " << endl << "Before Function Call: "  << endl <<  "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl;
	     
	//Call functions
	onlyEven(numbers, list_size, evenStatus);
	
	//output
	cout << endl << "After Function Call: " << endl << "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl << endl << endl << endl;
	
	
	
	
	
	
	
	
	
	
	//CASE3
	//When all number on the array are even
	//input
	numbers[0] = 2;
	numbers[1] = 6;
	numbers[2] = 8;
	numbers[3] = 10;
	numbers[4] = 12;
	
	list_size = 5;
	
	//Declares evenStatus to be anumber that doesn't indicate whether it's even or not.
	evenStatus = -1;
	cout << "Case3: " << endl << "Before Function Call: " << endl << "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl;
	     
	//Call functions
	onlyEven(numbers, list_size, evenStatus);
	
	//output
	cout << endl << "After Function Call: " << endl << "numbers: ";
	displayArray(numbers, list_size); 
	cout << endl << "list_size: " << list_size << endl
	     << "evenStatus: " << evenStatus << endl << endl << endl << endl;
}


void displayArray(const int numbers[],int list_size)
{
     int i = 0;
     int index = 0;

     for ( i = 1; i <= list_size; i++)
     {
         cout << numbers[index] << ", ";
         index++;
     }
}




void onlyEven(const int numbers[], int list_size, int& evenStatus)
{
	//Initially declares evenStatus(true) to be 1 by default
	evenStatus = 1;
	int index = 0;
	while (index <= list_size && evenStatus == 1)
	{
		//evenStatus is 1 as by default it is true UNLESS one of the
		//numbers in an array is not even.
		if ((numbers[index] % 2) != 0)
			evenStatus = 0;
		index++;
	}
}


