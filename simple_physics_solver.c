#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	printf("\nSimple Physics Problem Solver\n");

	// defining some variables
	float speed, d, t, s, v, u, h, g, a;
	g=9.8;

	// select a specific problem to solve
	char what_to_do[100];

	printf("Which problem to do\n");
	printf("Available problems: \n find_speed, \n find_acceleration, \n find_height, \n what to do?\n");
	scanf("%s",what_to_do);

	// do of speed from distance and time
	if (strcmp(what_to_do, "find_speed")==0){
		
		//enter the values from the console
		printf("Simple speed calculation from d and t. \n");
		printf("Enter d (m):\n");
		scanf("%f", &d);
		printf("\nEnter t (sec): \n");
		scanf("%f",&t);
		// if else to check if time is not zero
		if (t!=0){
			speed=(double)d/t;
			printf("Speed is %.3f m/s \n", speed);
		}

		else {

			printf("Time is 0, problem not solvable");
		}
	
	} 
	
	// Do problem of finding acceleration from v, u, t
	else if (strcmp(what_to_do, "find_acceleration")==0)
	{  
		//enter the values from the console
		printf("Simple acceleration calculation from v, u, t \n");
		printf("Enter u (m/s): \n");
		scanf("%f", &u);
		printf("Enter v (m/s): \n");
		scanf("%f",&v);
		printf("Enter t (m/s): \n");
		scanf("%f", &t);

		if (t!=0){

			a=(v-u)/t;

			printf("Acceleration is %.3f (m/s^2)", a);
		}
		else {
			printf("Time is 0 sec");
		}

	}
	
	// Find height achieved by an object thrown vertically
	else if ( strcmp(what_to_do, "find_height")==0)
	{
		// Enter the values from the console
		printf("Find height of an object thrown upwards with u, g \n");
		printf("Enter u (m/s):\n");
		scanf("%f",&u);
		
		s= (u*u)/2*g ;

		printf("The height achieved by object is %.3f m \n", s);
		
	}
	

	// No problem is selected
	else {

		printf("Problem not selected");
	}

	return 0;

}
