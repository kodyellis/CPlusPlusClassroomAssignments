// Filename:    programname.cpp
// Name: Ms. Thomas
// Class:   CSCI 210 Programming I
// Section/Lab: Section 1 - Tuesday

// Problem Description:
// ==================== header files ===============================
#include <iostream>           // for input/output
#include <fstream>            // for input/output
#include <iomanip>            // for output format
#include <cstdlib>
#include "utility.h"
using namespace std;

// =============== symbolic constants ==============================
const int DECIMAL = 2;
const int WIDTH = 5;
const int ARRAYSIZE = 16;     // number of items on row also # of judges
const int CONTESTANT = 35;     // number of contestants we have

const int MAXLENGTH = 20;
const int CONSTANT18 = 18;
// ================== data type declarations =======================
// =================== function prototypes ==========================
void openFile(ifstream&);
void getContestantData(ifstream&, int[], int&);
void printArray(const int[], int);

void calculateAverage(const int[], int, float&);
void over18orsame(const int[],int, float, int&);
void printHeader();


int main()
{
    // data declarations
    ifstream numberfile;
    int numbers[ARRAYSIZE];
    int size;
    int countOver;
    int lcv = 1;

    //int average;
    float averageScore = 0;

    system("clear");
    openFile(numberfile);

      printHeader();
      
    while(numberfile && lcv <= CONTESTANT)//while you can open file
    {
		averageScore = 0;
      getContestantData(numberfile,numbers,size);
      calculateAverage(numbers,size,averageScore);
      over18orsame(numbers,size,averageScore,countOver);

      cout << lcv << setw(25); //ouput contestant number
      cout << averageScore << setw(25); //output average score
      cout << countOver << endl;

      lcv++;
    }

    // display result1, result2, result3
    numberfile.close();

    return 0;
}// end main


void openFile(ifstream& infile)
// Purpose: This function will open an input text file.
// Precondition: None.
// Postcondition: infile is opened and a valid input file variable.
{
    char infile_name[MAXLENGTH];
    do
    {
        infile.clear();       // clear previous file name

         cout << "Enter input data file name: ";
         cin >> infile_name;
              cin.ignore(MAXNUMBER, EOLN);

         // link file variable to external file
         infile.open(infile_name);

         // verify file link is good
         if ( !infile )
             cout << infile_name
             << " was not successfully linked. Try again!"
             << endl;
    } while (!infile);
}// end openFile

void getContestantData(ifstream& infile, int data[], int& size)
// Purpose:
// Precondition:
// Postcondition:
{
   int index = 0;

   while(index < ARRAYSIZE)
   {
      infile >> data[index];
      index++;
   }

   size = ARRAYSIZE;
}// end

void printArray(const int list[], int size)
// Purpose: This function displays the contents of an integer array.
// Precondition: list contains an array of integers, size is a positive
//     integer.
// Postcondition: The contents of the integer array are display on the
//      computer screen.
{
   for(int index = 0; index < size; index++)
      cout << list[index] << " ";

      cout << endl;
}// end



void calculateAverage(const int list[], int size, float& average)
{
   //average = 0;


   for(int index = 0; index < size; index++)
   {
      average = average + list[index];        // total of scores
      // compute average using total computed
      average = average /  (float)size;
	}

 

}


void overAverage(const int list[],int size,float avg, int& over)//this is obsolete
{
   over = 0;

   for(int index = 0; index < size; index++)
   {
      if(list[index] > avg)
         over++;
   }
}



void over18orsame(const int list[],int size,float avg, int& over18)
{
   over18 = 0;

   for(int index = 0; index < size; index++)
   {
      if(list[index] > CONSTANT18)
         over18++;
   }
}



void printHeader()
{
   cout <<"Scoring Results" << endl;
   cout << "=========================================================================" << endl;
   cout << "Contestant " << setw(25) << "Average Score";
   cout << setw(25) << "#Scores 18 or Higher" << endl;
   cout << "=========================================================================" << endl;
}
