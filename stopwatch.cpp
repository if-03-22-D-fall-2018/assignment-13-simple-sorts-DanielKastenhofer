/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <stdlib.h>

float startTime;
float stopTime;

void start_stopwatch()
{
  startTime = clock();
}

void stop_stopwatch()
{
  stopTime = clock();
}

float elapsed_time()
{
  if(stopTime < startTime){
    return (clock() - startTime) / CLOCKS_PER_SEC;
  }
return (stopTime - startTime) / CLOCKS_PER_SEC;
}
