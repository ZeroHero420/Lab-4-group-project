#include "Standard.h"
#include "Functions.h"

// Small Numbers Funcation - 5 random integer numbers between 1 and 100
void SmallNumbersGenernator()
{
	int loopCount;                                               // Loop counter for the number of iterations
	int randomNumber;                                            // Variable to hold the generated random number
	int smallNumbersArr[5];                                      // Array to hold the 5 random numbers
	ofstream fout;                                               // Declare an ofstream object to write to the file

	fout.open("SmallRandom.txt");                                // Open the file "SmallRandom.txt" for writing

	for (loopCount = 0; loopCount < 5; loopCount++) 
	{
		randomNumber = ReturnRandomNumber(1, 100);               // Generate a random number between 1 and 9
		smallNumbersArr[loopCount] = randomNumber;               // Store the generated random number in the array
		fout << smallNumbersArr[loopCount] << " ";               // Write the random number to the file, followed by a space
	}

	fout.close();                                                // Close the file after writing
}

// Descending Array Generator - 25 descending integer numbers
void DescendingGenernator()
{
	int loopCountDec;                                            // Loop counter for the number of iterations
	int randomNumberDec = 100;                                   // Variable to hold the generated random number
	int descendingArr[25];                                       // Array to hold the 25 descending numbers
	ofstream fout;                                               // Declare an ofstream object to write to the file

	fout.open("Descend.txt");                                    // Open the file "Descend.txt" for writing

	for (loopCountDec = 0; loopCountDec < 25; loopCountDec++) 
	{
		randomNumberDec -= ReturnRandomNumber(1, 4);             // Generate a random number and add it to the previous number to ensure descending order
		descendingArr[loopCountDec] = randomNumberDec;           // Store the generated descending number in the array
		fout << descendingArr[loopCountDec] << " ";              // Write the descending number to the file, followed by a space
	}
	fout.close();                                                // Close the file after writing
}

// Ascending Array Generator - 10 ascending integer numbers
void AscendingGenernator()
{
	int loopCountAsc;                                            // Loop counter for the number of iterations
	int randomNumberAsc = 1;                                     // Variable to hold the generated random number
	int ascendingArr[10];                                        // Array to hold the 10 ascending numbers
	ofstream fout;                                               // Declare an ofstream object to write to the file

	fout.open("Ascend.txt");                                     // Open the file "Ascend.txt" for writing

	for (loopCountAsc = 0; loopCountAsc < 10; loopCountAsc++) 
	{
		randomNumberAsc += ReturnRandomNumber(1, 10);            // Generate a random number and add it to the previous number to ensure ascending order
		ascendingArr[loopCountAsc] = randomNumberAsc;            // Store the generated ascending number in the array
		fout << ascendingArr[loopCountAsc] << " ";               // Write the ascending number to the file, followed by a space
	}
	fout.close();                                                // Close the file after writing
}

// Large Random Array Generator - 50 random integer numbers
void LargeRandomGenernator()
{
	int loopCountLarge;                                          // Loop counter for the number of iterations
	int randomNumberLarge;                                       // Variable to hold the generated random number
	int largeRandomArr[50];                                      // Array to hold the 50 random numbers
	ofstream fout;                                               // Declare an ofstream object to write to the file

	fout.open("LargeRandom.txt");                                // Open the file "LargeRandom.txt" for writing

	for (loopCountLarge = 0; loopCountLarge < 50; loopCountLarge++) 
	{
		randomNumberLarge = ReturnRandomNumber(1, 100);          // Generate a random number between 1 and 100
		largeRandomArr[loopCountLarge] = randomNumberLarge;      // Store the generated random number in the array
		fout << largeRandomArr[loopCountLarge] << " ";           // Write the random number to the file, followed by a space
	}
	fout.close();                                                // Close the file after writing
}

// Empty Array Generator - generates an empty file
void EmptyGenernator()
{
	ofstream fout("Empty.txt");                                  // Open the file "Empty.txt" for writing
	fout.close();                                                // Close the file immediately, leaving it empty
}
