#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float find_speed(float *d, float *t, float *speed)
{
    printf("Val for d:\n");
    scanf("%f", d);
    printf("Val for t:\n");
    scanf("%f", t);

    if (*t == 0)
    {
        printf("Zero value error in time\n");
    }
    else
    {
        *speed = *d / *t;
        printf("The speed is: %.2f m/s\n", *speed);
    }
}

float find_acceleration(float *a, float *u, float *v, float *t)
{
    printf("Val for u(m/s):\n");
    scanf("%f", u);
    printf("Val for v(m/s):\n");
    scanf("%f", v);
    printf("Val for t(s):\n");
    scanf("%f", t);

    if (*t == 0)
    {
        printf("Zero value error in time\n");
    }
    else
    {
        *a = (*v - *u) / *t;
        printf("The value of acceleration is: %.2f m/s^2\n", *a);
    }
}

float find_height(float *u, float g, float *s)
{
    printf("Val of u (m/s):\n");
    scanf("%f", u);

    *s = (*u) * (*u) / (2 * g);
    printf("Height reached by object when thrown with u: %.2f (m/s) is %.2f (m)\n", *u, *s);
}

float kineticenergy(float *speed, float *m, float *K )
{
    char what_more_to_do[100];
    printf("In kinetic energy problem what more to do?\n \n");
    printf("find_v_from_K, find_K_from_v ?\n");
    scanf("%s", what_more_to_do);
    if ( strcmp(what_more_to_do, "find_v_from_K")==0)
    {
        printf("\nVal of K (J):\n");
        scanf("%f",K);
        printf("\nVal of m (kg):\n");
        scanf("%f",m);
        * speed=sqrt( 2 * (* K)/(* m));
        printf("\nSpeed is: %.2f",* speed);
    }
    else if (strcmp(what_more_to_do, "find_K_from_v")==0)
    { 
        printf("\nVal of u(m/s):\n");
        scanf("%f",speed);
        printf("\nVal of m(kg):\n");
        scanf("%f",m);

        * K=(0.5) * (* m) * (* speed) * (* speed);
        printf("\nKE of object is : %.2f Joules.\n",* K);
        return *K;
        
    }	
}


float potential_energy(float *m, float *h, float *P, float g)
{
    printf("Enter mass(kg):");
    scanf("%f",m);
    printf("Enter height (m):");
    scanf("%f",h);

    *P=(*m) *(* h)*g;
    printf("PE is: %.2f Joules.",*P);
    return *P;
}

float gravitation( float *m, float *h, float *Force, float G,float Me)
{
    printf("Enter mass(kg):");
    scanf("%f",m);
    printf("Enter height (m):");
    scanf("%f",h);

    float radius= *h+6400000;

    
    *Force=G * Me * *m / pow ( radius,2);
    printf("The force is %.2fN",*Force);

    
}

int main()
{
    printf("This is a simple physics calculator\nThere will be more improvements in the future.");

    float speed, d, t, s, v, u, h, a, m, K, P, Force;
    const float G =  6.674 * pow(10, -11);
    const float g = 9.8;
    const float Me= 5.972 * pow(10, 24);

    char what_to_do[100];
    printf("Which problem to do\n");
    printf("Available problems:  find_speed,find_acceleration,find_height,kineticenergy,potentialenergy, totalenergy, gravitational_force\n");
    printf("What to do:?\n");
    scanf("%s", what_to_do);

    if (strcmp(what_to_do, "find_speed") == 0)
    {
        printf("Find speed from distance and time given\n");
        find_speed(&d, &t, &speed);
    }
    else if (strcmp(what_to_do, "find_acceleration") == 0)
    {
        printf("Find acceleration from u, v, t\n");
        find_acceleration(&a, &u, &v, &t);
    }
    else if (strcmp(what_to_do, "find_height") == 0)
    {
        printf("Find height reached by an object thrown upwards with velocity u\n");
        find_height(&u, g, &s);
    }

	else if ( strcmp(what_to_do, "kineticenergy")==0)
	{   

        
		printf("Kinetic energy calculations: find_v_from_K, find_K_from_v.\n");
		kineticenergy(&speed, &m, &K);
	}
	
    else if ( strcmp(what_to_do,"potentialenergy")==0)
    {
        printf("Potential energy calculations from m,g,h");
        potential_energy(&m,&h,&P,g);
    }
    
    else if ( strcmp(what_to_do, "totalenergy")==0)
    {
        K=kineticenergy(&speed,&m,&K);
        P=potential_energy(&m,&h,&P,g);
        float TE=K+P;
        printf("The TE of object is %.2f J",TE);
    }

    else if ( strcmp(what_to_do, "gravitational_force")==0)
    {   
        gravitation(&m,&h,&Force,G,Me);
        
    }
    
    
    return 0;

}
