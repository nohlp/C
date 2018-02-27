/*
 * main.c
 *
 *  Created on: 26 февр. 2018 г.
 *      Author: nohlp
 */
#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGHT 10
#define NUMBERS_AMOUNT 1000000

int main(){
	srand(time(NULL));

	int frquency[ARRAY_LENGHT]={0};
	int a, i;

	for(i=0;i<NUMBERS_AMOUNT;i++){
		a = rand() % ARRAY_LENGHT;
		frquency[a]++;
	}

	for(i=0;i<ARRAY_LENGHT;i++){
		printf("Number %d generated %6d (%5.2f%%) times\n",i,frquency[i],((float)frquency[i]/NUMBERS_AMOUNT*100));

	}

/*
	int array[ARRAY_LENGHT];
	array[0]=10;
	array[1]=20;

	int array2[ARRAY_LENGHT] ={1,2,3,4,5};
*/
	return 0;
}
