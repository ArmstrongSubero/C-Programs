/** @file main.c
 *
 *  @author  Armstrong Subero (https://github.com/ArmstrongSubero)
 *  @version 1.0
 *
 *  @brief   Demonstrates use of strcpy 
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
	// character array
	char name[50];

        // use strcpy function
	strcpy(name, "Alice in wonderland");
	
	// print copied string to user
	printf("Hello, %s\n", name);

	return 0;
}


/**
 End of File
*/

