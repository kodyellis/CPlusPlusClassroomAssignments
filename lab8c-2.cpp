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
int ARRAY_SIZE = 19;
// ================= global data type declarations ====================
// =================== function prototype =============================
void testDriver1();
void displayArray(const int[], int);
void onlyEven(const int[], int, int&);

void testDriver2();
void findDifferentLocation(const int[], const int[], int&);
//======= function algorithm ===
int main()
{
	testDriver1();
	testDriver2();
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




void testDriver2()
{
	int diffElement = -1;
	int first[20];
	int second[20];


	
	//Case 1
	//When both arrays are different
	//Input
	first[0] = 2;
	first[1] = 6;
	first[2] = 8;
	first[3] = 10;
	first[4] = 12;
	first[5] = 1;
	first[6] = 7;
	first[7] = 18;
	first[8] = 11;
	first[9] = 22;
	first[10] = 85;
	first[12] = 74;
	first[13] = 1;
	first[14] = 110;
	first[15] = 122;
	first[16] = 26;
	first[17] = 38;
	first[18] = 171;
	first[19] = 252;
	
	second[0] = 2;
	second[1] = 6;
	second[2] = 8;
	second[3] = 140;
	second[4] = 172;
	second[5] = 17;
	second[6] = 71;
	second[7] = 118;
	second[8] = 151;
	second[9] = 252;
	second[10] = 835;
	second[12] = 734;
	second[13] = 13;
	second[14] = 101;
	second[15] = 12;
	second[16] = 2;
	second[17] = 0;
	second[18] = 17;
	second[19] = 58;
	
	cout << endl << "Case1: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement;
	
	
	//Call functions
	findDifferentLocation(first, second, diffElement);
	
	
	//output
	cout << endl << endl << "After function calls: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement << endl << endl << endl;
	
	
	
	
	
	//Case 2
	//When both arrays are the same
	diffElement = -1;
	
	first[0] = 2;
	first[1] = 6;
	first[2] = 8;
	first[3] = 140;
	first[4] = 172;
	first[5] = 17;
	first[6] = 71;
	first[7] = 118;
	first[8] = 151;
	first[9] = 252;
	first[10] = 835;
	first[11] = 7;
	first[12] = 734;
	first[13] = 13;
	first[14] = 101;
	first[15] = 12;
	first[16] = 2;
	first[17] = 0;
	first[18] = 17;
	first[19] = 58;
	
	second[0] = 2;
	second[1] = 6;
	second[2] = 8;
	second[3] = 140;
	second[4] = 172;
	second[5] = 17;
	second[6] = 71;
	second[7] = 118;
	second[8] = 151;
	second[9] = 252;
	second[10] = 835;
	second[11] = 7;
	second[12] = 734;
	second[13] = 13;
	second[14] = 101;
	second[15] = 12;
	second[16] = 2;
	second[17] = 0;
	second[18] = 17;
	second[19] = 58;
	
	//input
	cout << endl << "Case2: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement;
	
	//Call functions
	findDifferentLocation(first, second, diffElement);
	//Output
	cout << endl << endl << "After function calls: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement << endl << endl << endl;
	
	
	
	
	
	
	
	
	
	//Case 3
	//When 1 array has the same numbers and the other has different numbers
	diffElement = -1;
	
	first[0] = 2;
	first[1] = 2;
	first[2] = 2;
	first[3] = 2;
	first[4] = 2;
	first[5] = 2;
	first[6] = 2;
	first[7] = 2;
	first[8] = 2;
	first[9] = 2;
	first[10] = 2;
	first[12] = 2;
	first[13] = 2;
	first[14] = 2;
	first[15] = 2;
	first[16] = 2;
	first[17] = 2;
	first[18] = 2;
	first[19] = 2;
	
	second[0] = 1;
	second[1] = 6;
	second[2] = 8;
	second[3] = 140;
	second[4] = 172;
	second[5] = 17;
	second[6] = 71;
	second[7] = 118;
	second[8] = 151;
	second[9] = 252;
	second[10] = 835;
	second[12] = 734;
	second[13] = 13;
	second[14] = 101;
	second[15] = 12;
	second[16] = 2;
	second[17] = 9;
	second[18] = 17;
	second[19] = 58;
	
	//input
	cout << endl << "Case3: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement;
	
	//Call functions
	findDifferentLocation(first, second, diffElement);
	//Output
	cout << endl << endl << "After function calls: " << endl << endl << "First: " << endl;
	displayArray(first,ARRAY_SIZE);
	cout << endl << endl << "Second: " << endl;
	displayArray(second,ARRAY_SIZE);
	cout << endl << "diffElement: " << diffElement << endl << endl << endl;
	
}






void findDifferentLocation(const int array1[], const int array2[], int& diffElement)
{
	int index = 0;
	diffElement = -1;
	while (index <= ARRAY_SIZE && diffElement == -1)
	{
		if (array1[index] != array2[index])
			diffElement = index;
		index++;
		
	}
}

