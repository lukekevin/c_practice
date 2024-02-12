#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add (int a, int b)
{
	int c;
	c=a+b;
	printf("%d",c);

	return 0;
}

int main () 
{
	int a, b, c;

	printf("a:\n");
	scanf("%d",&a);
	printf("b:\n");
	scanf("%d",&b);

	add(a, b);

	return 0;
}