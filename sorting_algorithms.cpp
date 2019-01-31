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

}
void insertion_sort(int array[], int size)
{
  for (int i = 0; i < size; i++) {
    int key = array[i];
    int j = i-1;
    while (j>=0 && array[j] >key) {
      array[j+1] = array[j];
      j--;
  }
}
  array[j+1] = key;
}
