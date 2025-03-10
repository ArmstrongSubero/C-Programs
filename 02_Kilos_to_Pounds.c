/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Converts user entered weight from kilos to
 *           pounds
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
	int weightInKilos;
	float weightInPounds;
	float POUNDS = 2.2;

	// get weight in kilos
	printf("Please enter your weight in kilos: ");
	scanf("%d", &weightInKilos);

	// convert kilos to pounds
	weightInPounds = weightInKilos * POUNDS;

	// print converted weight
	printf("Your weight in pounds is: %.2f\n", weightInPounds);

	return 0;
}


/**
 End of File
*/

