/*
 * main.c
 *
 *  Created on: 26 февр. 2018 г.
 *      Author: nohlp
 */
#include <stdio.h>

int main(){
	int a=10;
	int b=20;
	int even=0;;
	while(a<b){
printf("%d ",a);
	if(a%2)
		even++;
a++;
	}
	printf("Even=%d\n",even);

	int input;
	do{
		printf("Enter a divider for 100: ");
		scanf("%d",&input);
	}while(input==0);

		printf("100 / %d = %d", input, 100 / input);
		printf("Ostatok ot deleniya: %d", 100 % input);
	return 0;
}
