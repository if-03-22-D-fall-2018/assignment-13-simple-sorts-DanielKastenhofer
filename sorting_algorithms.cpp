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
	bool elements_were_swapped;
	int last_unsorted_element = size - 1;
	do {

			elements_were_swapped = false;

			for (int j = 0; j < last_unsorted_element; j++) {

					if (array[j] > array[j + 1]) {
						int temp = array[j+1];
						array[j+1] = array[j];
						array[j] = temp;
						elements_were_swapped = true;
					}
				}
			last_unsorted_element--;

	} while (elements_were_swapped);

}
void insertion_sort(int array[], int size)
{
	int key;
	int j;
  for (int i = 0; i < size; i++) {
    key = array[i];
    j = i-1;
    while (j>=0 && array[j] >key) {
      array[j+1] = array[j];
      j--;
  }
}
  array[j+1] = key;
}
