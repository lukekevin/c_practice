#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int add( int a, int b )
{
	int c;
	c=a+b;

	return c;
}



int main () 
{
	int a, b, c;

	printf("a:\n");
	scanf("%d",&a);

	printf("b:\n");
	scanf("%d",&b);

	c=add(a,b);

	printf("%d", c);

	return 0;
}