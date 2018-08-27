// sort.h - Sort Header File

#ifndef _SORT_H
#define _SORT_H

// ===============================================
// = WORK HORSE: SWAP
// ===============================================
template<typename T>
void Swap(T& first, T& second);                     // COMPLETE

// ===============================================
// = HELPING FUNCTION
// ===============================================
template<typename T>
void PrintArray(T* array, int size, bool sorted);   // COMPLETE

template<typename T>
bool CheckSort(T* array, int size);                 // COMPLETE

// ===============================================
// = SORTING ALGORITHMS
// ===============================================
template<typename T>
void BubbleSort(T* array, int size);                // COMPLETE

template<typename T>
void InsertionSort(T*array, int size);              // COMPLETE

template<typename T>
void SelectionSort(T*array, int size);              // COMPLETE


#include "sort.cpp"
#endif
