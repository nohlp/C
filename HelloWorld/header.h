/*
 * header.h
 *
 *  Created on: 27 февр. 2018 г.
 *      Author: nohlp
 */

#ifndef HEADER_H_
#define HEADER_H_

void seeConus(int lines){

	for(int i=0;i<lines;i++){

		for(int j=1;j<lines-i;j++){
			printf(" ");
		}
		for(int j=lines-i*2;j<=lines;j++){
			printf("*");
		}
	printf("\n");
	}

}

void swapDigits(int *x,int *y){
	*x^=*y;
	*y^=*x;
	*x^=*y;
}

#endif /* HEADER_H_ */
