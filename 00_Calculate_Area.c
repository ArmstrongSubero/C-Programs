/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Computes area of square given a side
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


/*!
 *
 * @brief Main program entry point
 *
*/
int main(void)
{
	// program variables
    int area, side;

	// get side from user
	printf("Enter length of side: ");
	scanf("%d", &side);

	// calculate area
	area = side * side;

	// print area for user
	printf("\nArea of square is: %d\n", area);

	return 0;
}


/**
 End of File
*/

