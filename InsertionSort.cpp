#include "Standard.h"
#include "InsertionSort.h"

void InsertionSort(int arr[], int size, int& comparisons, int& swaps) 
{
    for (int currentIndex = 1; currentIndex < size; currentIndex++)
    {
        int temp = arr[currentIndex];
        int compareIndex = currentIndex - 1;

        // We enter the loop only if BOTH conditions are met.
        // If it fails on the first check (compareIndex >= 0), 0 comparisons? No, 1.
        // If it fails on the second check (arr[compareIndex] > temp), that's also 1 comparison.

        while (compareIndex >= 0)
        {
            comparisons++; // We are about to check the value comparison
            if (arr[compareIndex] > temp)
            {
                arr[compareIndex + 1] = arr[compareIndex];
                swaps++; //we count this as a move/swap
                compareIndex--;
            }
            else
            {
                // We checked the value and it was NOT greater, so we stop.
                break;
            }
        }

        arr[compareIndex + 1] = temp;
    }
}