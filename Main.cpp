#include "Standard.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "Functions.h"

int main()
{
    int choice;                                  // Choice for menu selection

    int arr[100];                                // Array to hold the integers read from the file up to 100 elements

    int size;                                    // Variable to hold the size of the array

    // Arrays for sorting
    int bubbleArr[100];                          // Array to hold the integers for Bubble Sort up to 100 elements
    int insertionArr[100]; 		                 // Array to hold the integers for Insertion Sort up to 100 elements

    // Counter for bubblesort
    int bubbleComp;                              // Variable to count comparisons in Bubble Sort
    int bubbleSwap;                              // Variable to count swaps in Bubble Sort

    // Counter for insertionsort
    int insertComp;                              // Variable to count comparisons in Insertion Sort
    int insertSwap;                              // Variable to count swaps in Insertion Sort

    // Variables for file names
    string inputFile;                            // Variable to hold the name of the input file
    string outputFile;                           // Variable to hold the name of the output file

    // Code Report Memory Leak
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    // Menu Header
    PrintHeader(static_cast<ofstream&>(cout), DASH);

    do
    {

        // Menu Display
        cout << "\n1. SmallRandom.txt\n";
        cout << "2. Descend.txt\n";
        cout << "3. Ascend.txt\n";
        cout << "4. LargeRandom.txt\n";
        cout << "5. Empty.txt\n";
        cout << "6. Exit\n";

        cin >> choice;

        switch (choice) {

        case 1:
            // 4 random integer numbers
            inputFile = "SmallRandom.txt";
            outputFile = "Output1SmallRandom.txt";
            SmallNumbersGenernator();
            break;

        case 2:
            // 25 descending integer numbers
            inputFile = "Descend.txt";
            outputFile = "Output2Descend.txt";
            DescendingGenernator();
            break;

        case 3:
            // 10 ascending integer numbers
            inputFile = "Ascend.txt";
            outputFile = "Output3Ascend.txt";
            AscendingGenernator();
            break;

        case 4:
            // 50 random integer numbers
            inputFile = "LargeRandom.txt";
            outputFile = "Output4LargeRandom.txt";
            LargeRandomGenernator();
            break;

        case 5:
            // Empty File
            inputFile = "Empty.txt";
            outputFile = "Output5Empty.txt";
            EmptyGenernator();
            break;

        case 6:
            // Exit the program
            cout << "Exiting the program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

        //if a user entered any choice ranging from 1 through 5, inclusively (i.e. valid file choice)
        if (choice >= 1 && choice <= 5) {

            size = 0; // Reset size for each file

            ifstream fin(inputFile);
            ofstream fout(outputFile);

            //read the file
            while (fin >> arr[size])
            {
                size++;
            }

            // Copy the original array to the sorting arrays
            for (int index = 0; index < size; index++)
            {
                bubbleArr[index] = arr[index];
                insertionArr[index] = arr[index];
            }

            // Counter for bubblesort
            bubbleComp = 0;                      // Reset comparison count for Bubble Sort
            bubbleSwap = 0;                      // Reset swap count for Bubble Sort

            // Counter for insertion sort
            insertComp = 0;                      // Reset comparison count for Insertion Sort
            insertSwap = 0;                      // Reset swap count for Insertion Sort

            //run the sorts
            BubbleSort(bubbleArr, size, bubbleComp, bubbleSwap);
            InsertionSort(insertionArr, size, insertComp, insertSwap);

            //output results
            PrintHeader(fout, EQUAL);
            fout << "Input File: " << inputFile << "\n\n\n";

            // Output the result before bubble sort
            fout << "BubbleSort Before: \n";
            for (int index = 0; index < size; index++)
            {
                // Make rows of 10s for better readability
                if (index != 0 && index % 10 == 0)
                {
                    fout << "\n";
                }

                // Output the original array values for bubble sort
                fout << arr[index] << " ";
            }
            // Output the result after bubble sort
            fout << "\nBubbleSort After: \n";
            for (int index = 0; index < size; index++)
            {
                // Make rows of 10s for better readability
                if (index != 0 && index % 10 == 0)
                {
                    fout << "\n";
                }

                // Output the sorted array values for bubble sort
                fout << bubbleArr[index] << " ";
            }

            // Output the number of comparisons and swaps for bubble sort
            fout << "\nComparisons: " << bubbleComp;
            fout << "\nSwaps: " << bubbleSwap << "\n\n\n";

            // Output the result before insertion sort
            fout << "InsertionSort Before: \n";
            for (int index = 0; index < size; index++)
            {
                // Make rows of 10s for better readability
                if (index != 0 && index % 10 == 0)
                {
                    fout << "\n";
                }

                // Output the original array values for insertion sort
                fout << arr[index] << " ";
            }

            // Output the result after insertion sort
            fout << "\nInsertion Sort After: \n";
            for (int index = 0; index < size; index++)
            {

                // Make rows of 10s for better readability
                if (index != 0 && index % 10 == 0)
                {
                    fout << "\n";
                }

                // Output the sorted array values for insertion sort
                fout << insertionArr[index] << " ";
            }

            // Output the number of comparisons and swaps for insertion sort
            fout << "\nComparisons: " << insertComp;
            fout << "\nSwaps:" << insertSwap << "\n\n";

            // Add a space at the end of the file for better formatting
            fout << " " << endl;

            // Close the files
            fin.close();
            fout.close();
        }
        // Output success message
        cout << inputFile << " Processing successfully completed!" << endl;
    } while (choice != 6);

	// Return Zero to indicate successful program termination
    return 0;
}