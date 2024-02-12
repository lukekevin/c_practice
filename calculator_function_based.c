#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b){
	int c;

	c=a+b;
	printf("Addition of a and b is %d", c);
}

int sub( int a, int b){
	int c;

	c=a-b;
	printf("Subtraction of a and b is %d", c);

}

int mult(int a, int b){
	int c;

	c=a*b;
	printf("Multiplication of a and b is %d",c);
}

int divide(int a, int b){
	int c;

	if (b==0){

		printf("Zero error\n");
	}

	else {
		c=a/b;
		printf("Division of a and b is %d", c);
	}
	
	
}

int main(){

	char what_to_do[50];
	int a, b;
	printf("Val a:\n");
	scanf("%d",&a);
	printf("Val b:\n");
	scanf("%d", &b);

	
	printf("Operation to do:\n add, \n sub, \n mult, \n divide\n:");
	scanf("%s", what_to_do);
	
	if ( strcmp(what_to_do,"add" )==0)
	{
		add(a,b);
	}

	else if ( strcmp(what_to_do,"sub")==0)
	{
		sub(a,b);
	}
	
	else if ( strcmp(what_to_do,"mult")==0)
	{
		mult(a,b);
	}
	
	else if ( strcmp(what_to_do,"divide")==0)
	{
		divide(a,b);
	}
	
	
	return 0;
}