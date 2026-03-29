#include "Standard.h"
#include "BubbleSort.h"
#include "InsertionSort.h"

int main() {
    int choice;
    string inputFile;
    string outputFile;

    do {
        // menu display
        cout << "\n1. SmallRandom.txt\n";
        cout << "2. Descend.txt\n";
        cout << "3. Ascend.txt\n";
        cout << "4. LargeRandom.txt\n";
        cout << "5. Empty.txt\n";
        cout << "6. Exit\n";

        cin >> choice;

        switch (choice) {

        case 1:
            //4 random integer numbers
            inputFile = "SmallRandom.txt";
            outputFile = "Out1.txt";
            break;

        case 2:
            //25 descending integer numbers
            inputFile = "Descend.txt";
            outputFile = "Out2.txt";
            break;

        case 3:
            // 10 ascending integer numbers
            inputFile = "Ascend.txt";
            outputFile = "Out3.txt";
            break;

        case 4:
            //50 random integer numbers
            inputFile = "LargeRandom.txt";
            outputFile = "Out4.txt";
            break;

        case 5:
            //empty file
            inputFile = "Empty.txt";
            outputFile = "Out5.txt";
            break;

        case 6:
            //the exit
            cout << "Exiting the program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

        //if a user entered any choice ranging from 1 through 5, inclusively (i.e. valid file choice)
        if (choice >= 1 && choice <= 5) {
            int arr[100];
            int size = 0;

            ifstream fin(inputFile);
            ofstream fout(outputFile);

            //read the file
            while (fin >> arr[size]) {
                size++;
            }

            int bubbleArr[100];
            int insertionArr[100];

            for (int index = 0; index < size; index++) {
                bubbleArr[index] = arr[index];
                insertionArr[index] = arr[index];
            }

            //counter for bubblesort
            int bubbleComp = 0;
            int bubbleSwap = 0;

            //counter for insertionsort
            int insertComp = 0;
            int insertSwap = 0;

            //run the sorts
            BubbleSort(bubbleArr, size, bubbleComp, bubbleSwap);
            InsertionSort(insertionArr, size, insertComp, insertSwap);

            //output results
            fout << "Input File: " << inputFile << "\n\n\n";

            fout << "BubbleSort Before: \n";
            for (int index = 0; index < size; index++) {
                fout << arr[index] << "";
            }

            fout << "\nBubbleSort After: \n";
            for (int index = 0; index < size; index++) {
                fout << bubbleArr[index] << "";
            }

            fout << "\nComparisons: " << bubbleComp;
            fout << "\nSwaps: " << bubbleSwap << "\n\n\n";

            fout << "InsertionSort Before: \n";
            for (int index = 0; index < size; index++) {
                fout << arr[index] << "";
            }

            fout << "\nInsertion Sort After: \n";
            for (int index = 0; index << size; index++) {
                fout << insertionArr[index] << "";
            }

            fout << "\nComparisons: " << insertComp;
            fout << "\nSwaps:" << insertSwap << "\n\n";

            fin.close();
            fout.close();

            cout << inputFile << "Processing successfully completed!" << endl;
        }
     }

     while (choice != 6);

     return 0;


}