#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Small Numbers Array Generator - 5 random integer numbers between 1 and 9
void SmallNumbersGenernator();

// Descending Array Generator - 25 descending integer numbers
void DescendingGenernator();

// Ascending Array Generator - 10 ascending integer numbers
void AscendingGenernator();

// Large Random Array Generator - 50 random integer numbers
void LargeRandomGenernator();

// Empty Array Generator - generates an empty file
void EmptyGenernator();

// Function to print array values in a formatted manner
void PrintArrayValues(ofstream& fout, int arr[], int size, string label);


#endif FUNCTIONS_H