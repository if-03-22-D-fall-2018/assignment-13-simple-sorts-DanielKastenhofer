/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <time.h>
#include <stdlib.h>


void init_random(int *array, unsigned long length)
{
	srandom(time(NULL));
	for (unsigned long i = 0; i < length; i++)
		array[i] = random();
}

void bubble_sort(int array[], int size)
{
	bool were_swapped;
	do {
		were_swapped = false;
		for (int i = 0; i < size; i++) {
			if (array[i] > array[i+1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				were_swapped = true;
			}
		}
	} while(were_swapped);
}


void insertion_sort(int array[], int size)
{
	int toSwap;
	int toCompare;

	for (int i = 0; i < size; i++) {
		toSwap = array[i];
		toCompare = i - 1;
		while (toCompare >= 0 && array[toCompare] > toSwap) {
			array[toCompare + 1] = array[toCompare];
			toCompare--;
		}
	}
	array[toCompare + 1] = toSwap;
}
