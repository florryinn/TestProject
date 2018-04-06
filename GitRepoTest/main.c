/*
 * main.c
 *
 *  Created on: Mar 19, 2018
 *      Author: florin
 */

#include <stdio.h>
#include "functii.h"


int main()
{
	int a=0;
	while(a<5)
	{
		a++;
	}
	printf("Hello World!\n");
	printf("Suma numere 2 + 3: %d",sumaNumere(2,3));
	printf("\nHello word!\n");
	return 0;
}
