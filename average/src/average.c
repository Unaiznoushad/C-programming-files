/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,average;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	average=(num1+num2+num3)/3;
	printf("average=%f",average);
	return EXIT_SUCCESS;
}
