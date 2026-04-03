#include "Standard.h"
#include "InsertionSort.h"

// Insertion Sort function implementation
void InsertionSort(int arr[], int size, int& comparisons, int& swaps) 
{
    // Traverse the array starting from the second element
    // The first element is considered already sorted
    for (int currentIndex = 1; currentIndex < size; currentIndex++)
    {
        int temp = arr[currentIndex];           // Store the current value to be inserted
        int compareIndex = currentIndex - 1;    // Start comparing with the previous element

        int shiftCount = 0; // Tracks how many elements are shifted during this insertion

        // Shift elements to the right until the correct position for temp is found
        while (compareIndex >= 0)
        {
            comparisons++; // Count each value comparison

            // If the current element is greater than temp, shift it right
            if (arr[compareIndex] > temp)
            {
                // Shift element one position to the right
                arr[compareIndex + 1] = arr[compareIndex]; 
                compareIndex--;
                // Record that a shift occurred by increase it by 1
                shiftCount++; 
            }
            else
            {
                // Stop shifting once the correct position is found
                break;
            }
        }

        // Insert the value into its correct sorted position
        arr[compareIndex + 1] = temp;

        // Count this insertion as a single swap if any shifting occurred
        if (shiftCount > 0)
        {
            swaps++;
        }
    }
}