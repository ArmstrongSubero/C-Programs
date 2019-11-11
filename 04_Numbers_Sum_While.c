/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Prints the sum of numbers entered by
 *           a user
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


/*!
 *
 * @brief Main program entry point
 *
*/
int main(void)
{
    // program variables
	int num, sum = 0;

	// get first number
	printf("Enter a number (0 to end): ");
	scanf("%d", &num);


	// main program loop
	while(num != 0)
	{
		// add number to sum
		sum = sum + num;

		// get new number
		printf("Enter a number (0 to end): ");
		scanf("%d", &num);
	}

	// if 0 entered, exit loop and print sum
	printf("\nThe sum is %d\n", sum);


	return 0;
}


/**
 End of File
*/

