#include "Standard.h"
#include "InsertionSort.h"

void InsertionSort(int arr[], int size, int& comparisons, int& swaps) 
{
	for (int currentIndex = 1; currentIndex < size; currentIndex++) 
	{
		int temp = arr[currentIndex];
		int compareIndex = currentIndex - 1;

		while (compareIndex >= 0 && arr[compareIndex] > temp) 
		{
			// CHECK:
			//comparisons++;
			arr[compareIndex + 1] = arr[compareIndex];
			compareIndex--;
		}

		if (compareIndex >= 0) 
		{
			// CHECK:
			//comparisons++;
		}
		arr[compareIndex + 1] = temp;

	}
}
