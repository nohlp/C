/*
 * main.c
 *
 *  Created on: 26 февр. 2018 г.
 *      Author: nohlp
 */
#include <stdio.h>

int main(){
	int lines;

	printf("Enter number of lines:");
	scanf("%d",&lines);

	for(int i=0;i<lines;i++){

		for(int j=1;j<lines-i;j++){
			printf(" ");
		}
		for(int j=lines-i*2;j<=lines;j++){
			printf("*");
		}
	printf("\n");
	}

	return 0;
}
