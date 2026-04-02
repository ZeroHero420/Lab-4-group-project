#include "Standard.h"
#include "BubbleSort.h"

// Bubble Sort function implementation
void BubbleSort(int arr[], int size, int& comparisons, int& swaps)
{

    for (int pass = 0; pass < size - 1; pass++) 
    {

        for (int index = 0; index < size - pass - 1; index++) 
        {
			// Increase comparisons for each comparison made
			comparisons++;                                           

            if (arr[index] > arr[index + 1]) 
            {
				// If the current element is greater than the next element, we swap them
				swaps++;                    

				// Swap arr[index] and arr[index + 1]
                int temp = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temp;
            }
        }
    }
}