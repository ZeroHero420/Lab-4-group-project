#include "Standard.h"
#include "Functions.h"

//Small Numbers Function - 5 random integer numbers between 1 and 100
void SmallNumbersGenernator()
{
	// Loop counter for the number of iterations
	int loopCount;                                             

	// Variable to hold the generated random number
	int randomNumber;                                            

	// Array to hold the 5 random numbers
	int smallNumbersArr[5];                                     

	// Declare an ofstream object to write to the file
	ofstream fout;                                               

	// Open the file "SmallRandom.txt" for writing
	fout.open("SmallRandom.txt");                           

	for (loopCount = 0; loopCount < 5; loopCount++)
	{
		// Generate a random number between 1 and 9
		randomNumber = ReturnRandomNumber(1, 100);    

		// Store the generated random number in the array
		smallNumbersArr[loopCount] = randomNumber;    

		// Write the random number to the file, followed by a space
		fout << smallNumbersArr[loopCount] << " ";             
	}

	// Close the file after writing
	fout.close();                                                
}

// Descending Array Generator - 25 descending integer numbers
void DescendingGenernator()
{
	// Loop counter for the number of iterations
	int loopCountDec;  

	// Variable to hold the generated random number
	int randomNumberDec = 100;   

	// Array to hold the 25 descending numbers
	int descendingArr[25];       

	// Declare an ofstream object to write to the file
	ofstream fout;                                              

	// Open the file "Descend.txt" for writing
	fout.open("Descend.txt");                                   

	for (loopCountDec = 0; loopCountDec < 25; loopCountDec++)
	{
		// Generate a random number and add it to the previous number to ensure descending order
		randomNumberDec -= ReturnRandomNumber(1, 4);     

		// Store the generated descending number in the array
		descendingArr[loopCountDec] = randomNumberDec;     

		// Write the descending number to the file, followed by a space
		fout << descendingArr[loopCountDec] << " ";             
	}

	// Close the file after writing
	fout.close();                                           
}

// Ascending Array Generator - 10 ascending integer numbers
void AscendingGenernator()
{
	// Loop counter for the number of iterations
	int loopCountAsc;       

	// Variable to hold the generated random number
	int randomNumberAsc = 1;      

	// Array to hold the 10 ascending numbers
	int ascendingArr[10];       

	// Declare an ofstream object to write to the file
	ofstream fout;      

	// Open the file "Ascend.txt" for writing
	fout.open("Ascend.txt");                                  

	for (loopCountAsc = 0; loopCountAsc < 10; loopCountAsc++)
	{
		// Generate a random number and add it to the previous number to ensure ascending order
		randomNumberAsc += ReturnRandomNumber(1, 10);            
		// Store the generated ascending number in the array
		ascendingArr[loopCountAsc] = randomNumberAsc;        

		// Write the ascending number to the file, followed by a space
		fout << ascendingArr[loopCountAsc] << " ";              
	}

	// Close the file after writing
	fout.close();                                              
}

// Large Random Array Generator - 50 random integer numbers
void LargeRandomGenernator()
{

	// Loop counter for the number of iterations
	int loopCountLarge;           

	// Variable to hold the generated random number
	int randomNumberLarge;                                      

	// Array to hold the 50 random numbers
	int largeRandomArr[50];         
	
	// Declare an ofstream object to write to the file
	ofstream fout;                                               

	// Open the file "LargeRandom.txt" for writing
	fout.open("LargeRandom.txt");                         

	for (loopCountLarge = 0; loopCountLarge < 50; loopCountLarge++)
	{

		randomNumberLarge = ReturnRandomNumber(1, 100);    

		// Store the generated random number in the array
		largeRandomArr[loopCountLarge] = randomNumberLarge;    

		// Write the random number to the file, followed by a space
		fout << largeRandomArr[loopCountLarge] << " ";           
	}

	// Close the file after writing
	fout.close();                                               
}

void PrintArrayValues(ofstream& fout, int arr[], int size, string label) {
	fout << label << endl;

	//Label the columns
	fout << "        "; // space for row labels
	for (int col = 1; col <= 10; col++) {
		fout << setw(6) << ("Col" + to_string(col));
	}
	fout << endl;

	int row = 1;



	for (int index = 0; index < size; index++) {
		// Start of a new row
		if (index % 10 == 0) {
			fout << "\nRow " << row << ": ";
			row++;
		}

		fout << setw(6) << arr[index];


		// if there are 10 numbers in that row, do a newline!
		if ((index + 1) % 10 == 0) {
			fout << endl;
		}
	}
	// If the law row has fewer than 10 elements, insert a newline
	if (size % 10 != 0) {
		fout << endl;
	}

	fout << endl;
}


// Empty Array Generator - generates an empty file
void EmptyGenernator()
{
	// Open the file "Empty.txt" for writing
	ofstream fout("Empty.txt"); 

	// Close the file immediately, leaving it empty              
	fout.close();                              
}