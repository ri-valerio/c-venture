/*
 ============================================================================
 Name        : 02_03.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Setting values to use later, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float priceOfGasInCalifornia = 0.99;    // 4 bytes
    int y                        = 0;       // 4 bytes
    short a                      = 1;       // 2 bytes
    double radius                = 2.34567; // 8 bytes
    y                            = 12;

	printf("priceOfGasInCalifornia: %f\n",priceOfGasInCalifornia);
	printf("y: %d\n",y);
	printf("a: %d\n",a);
	printf("radius: %lf\n",radius);

	return EXIT_SUCCESS;
}


