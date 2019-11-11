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

<<<<<<< HEAD
	// use strcpy function
=======
        // use strcpy function
>>>>>>> a5b770323dfe37345373bc39a99f19538dca494e
	strcpy(name, "Alice in wonderland");
	
	// print copied string to user
	printf("Hello, %s\n", name);

	return 0;
}


/**
 End of File
*/

