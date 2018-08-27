// sort.cpp - Sort Header Slave file - Implementations

#include <iostream>

// ===============================================
// = Swap
// ===============================================
template<typename T>
void Swap(T& first, T& second)
{
    T temp  = first;
    first   = second;
    second  = temp;
}


// ===============================================
// = PrintArray
// ===============================================
template <typename T>
void PrintArray(T* array, int size, bool sorted)
{
    if (!sorted)
        std::cout << "Array content before sort: " << '{';
    else
        std::cout << "Array content  after sort: " << '{';
        
    for(int i = 0; i < size; ++i)
    {
        if (i < (size - 1))
            std::cout << array[i] << ", ";
        else
            std::cout << array[i];
    }
    std::cout << '}' << '\n';
}

// ===============================================
// = CheckSort
// ===============================================
template <typename T>
bool CheckSort(T* array, int size)
{
    bool sorted = false;
    
    for(int i = 0; i < size - 1; ++i)
    {
        if((array[i] <= array[i+1]))
            sorted = true;
        else
        {
            sorted = false;
            break;
        }
    }
    
    return sorted;
}

// ===============================================
// = BubbleSort
// ===============================================
template<typename T>
void BubbleSort(T* array, int size)
/*
    In BubbleSort,
    The lighter (smaller) values float to the top (front),
    and the heavier (larger) values float to the bottom (back).
*/
{
    if (size == 0)
        return;
        
    bool sorted = false;
    
    do
    {
        for (int i = 0; i < size - 1; ++i)
        {
            if(array[i] > array[i+1])
                Swap(array[i], array[i+1]);
        }
        sorted = CheckSort(array, size);
    } while (!sorted);
}

// ===============================================
// = InsertionSort
// ===============================================
template<typename T>
void InsertionSort(T*array, int size)
/*
	In InsertionSort,
	Each indexed value is compared to each of its prior indexed values.
	The lesser of the values is swapped toward the front.
*/
{
    if (size == 0)
        return;

	bool sorted;

	do
	{        
    	for(int i = 1; i < size; ++i)
    	{
			for (int j = i - 1; j >= 0; --j)
       	 	{
				if (array[i] < array[j])
				{
       		     	Swap(array[i], array[j]);
					i = j;
					j = i - 1;
				}
        	}
    	}

		sorted = CheckSort(array, size);
	} while(!sorted);
}

// ===============================================
// = SelectionSort
// ===============================================
template<typename T>
void SelectionSort(T* array, int size)
/*
	In SelectionSort,
	The smallest value in the array is found and swapped with the first element in the array.
	This is done for each index, where the last smallest element is not considered for each iteration.
*/
{
	if (size == 0)
		return;

	bool sorted = false;

	do
	{
		T smallest;
		for(int i = 0; i < size; ++i)
		{
			smallest = i;
			for(int j = i + 1; j < size; ++j)
			{
				if (array[j] < array[smallest])
					smallest = j;
			}
			Swap(array[i], array[smallest]);
		}

		sorted = CheckSort(array, size);
	} while (!sorted);
}
