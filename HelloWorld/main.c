/*
 * main.c
 *
 *  Created on: 26 февр. 2018 г.
 *      Author: nohlp
 */
#include <stdio.h>

int main(){
	printf("HelloWorld\n");
	printf("This is a new row\t with tab\n");
	printf("This is a new row\\ with tab\n");

	int a=50;
	printf("%05d%%",a);

	short sh=123;
	int number=-56;
	char symbol = 'A';
	float real = 5.345f;

	printf("Значение: %d\n",a);
	printf("Адрес: %p\n",&a);
/*
	int input;
	printf("Введите Значение:");
	scanf("%d",&input);

	printf("Введено %d input*2=%d",input,input*2);
*/




	return 0;
}
