// main.cpp

#include "sort.h"

int main()
{
//    int test[] = {};                          // {(BubbleSort, SUCCESS), (InsertionSort, SUCCESS), (SelectionSort, SUCCESS)}
//    int test[] = {4, 7, 1, 8, 2};             // {(BubbleSort, SUCCESS), (InsertionSort, SUCCESS), (SelectionSort, SUCCESS)}
//    int test[] = {9, 8, 7, 6, 5, 4, 3, 2, 1}; // {(BubbleSort, SUCCESS), (InsertionSort, SUCCESS), (SelectionSort, SUCCESS)}
      int test[] = {5, 1, 2, 8, 9, 2};          // {(BubbleSort, SUCCESS), (InsertionSort, SUCCESS), (SelectionSort, SUCCESS)}

    int size = sizeof(test)/sizeof(test[0]);
    
    PrintArray(test, size, false);
	BubbleSort(test, size);		// COMPLETE
//	InsertionSort(test, size);	// COMPLETE
//	SelectionSort(test, size);	// COMPLETE
    PrintArray(test, size, true);
}
