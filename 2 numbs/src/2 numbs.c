/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	if(num1>num2){
		printf("the greatest number is:%d",num1);
	}
	else{
		printf("the greatest number is:%d",num2);
	}
		return EXIT_SUCCESS;
}
