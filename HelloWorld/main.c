/*
 * main.c
 *
 *  Created on: 26 февр. 2018 г.
 *      Author: nohlp
 */
#include <stdio.h>
#include "header.h"
int main(){
	int lines;

	printf("Enter number of lines:");
	scanf("%d",&lines);

	seeConus(lines);

	int a=50;
	int b=30;
	printf("Swap digits a=%d, b=%d",a,b);
	swapDigits(&a,&b);
	printf("Swap digits a=%d, b=%d",a,b);

	return 0;
}
