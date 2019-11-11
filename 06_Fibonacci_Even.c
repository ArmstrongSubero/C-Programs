/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Finds sum of even valued Fibonacci numbers below 
 *           4 000 000 uses space optimized method
 *         
 *
 *  @par
 *  COPYRIGHT NOTICE: 
 *  (c) 2019 Armstrong Subero. All rights reserved. 
 *                     
 */


/**
  Section: Included Files
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define SEQUENCE_LIMIT 4000000


/*!
 *
 * @brief Main program entry point
 *
*/
int main(void)
{
	// program variables
	int sum  = 0;
    int prev = 1;
	int next = 1;
	int fibNum = 1;

	// keep within set limit
	while (fibNum <= SEQUENCE_LIMIT)
	{
		// if fibonacci number is even add to sum
		if (fibNum % 2 == 0)
		{
			sum += fibNum;
		}

		// calculate using optimize fibonacci method
		fibNum = prev + next;
		prev = next;
		next = fibNum;
	}

	// print sum to user
	printf("Total is: %d\n", sum);

	return 0;
}


/**
 End of File
*/

