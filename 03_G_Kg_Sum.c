/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Reads a float weight in kgs and lbs then
 *           prints the sum as "xkg yg"
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
	float weight1;
	float weight2;
	float totalWeight;
	float exponent;
	int   mantissa;
	int   grams;

	// enter first weight
	puts("Enter first weight: ");
    scanf("%f", &weight1);

	// enter second weight
	puts("Enter second weight: ");
    scanf("%f", &weight2);

	// calculate total weight
    totalWeight = weight1 + weight2;

	// sepatate mantissa from exponent
    mantissa = totalWeight;
	exponent = totalWeight - mantissa;

	// remove decimal point
	exponent *= 1000.0;

	// convert to an integer
	grams = (int)exponent;

	// print sum in form ("xkg yg")
	printf("%dkg\t", mantissa);
	printf("%dg\n", grams);

	return 0;
}


/**
 End of File
*/

