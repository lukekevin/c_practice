#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void find_speed(float *d, float *t, float *speed)
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

void find_acceleration(float *a, float *u, float *v, float *t)
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

void find_height(float *u, float g, float *s)
{
    printf("Val of u (m/s):\n");
    scanf("%f", u);

    *s = (*u) * (*u) / (2 * g);
    printf("Height reached by object when thrown with u: %.2f (m/s) is %.2f (m)\n", *u, *s);
}

void kineticenergy(float *speed, float *m, float *K )
{
    char what_more_to_do[100];
    printf("What more to do? find_v_from_K, find_K_from_v\n");
    scanf("%s", what_more_to_do);
    if ( strcmp(what_more_to_do, "find_v_from_K")==0)
    {
        printf("Val of K (J):\n");
        scanf("%f",K);
        printf("Val of m (kg):\n");
        scanf("%f",m);
        * speed=sqrt( 2 * (* K)/(* m));
        printf("Speed is: %.2f",* speed);
    }
    else if (strcmp(what_more_to_do, "find_K_from_v")==0)
    { 
        printf("Val of u(m/s):\n");
        scanf("%f",speed);
        printf("Val of m(kg):\n");
        scanf("%f",m);

        * K=(0.5) * (* m) * (* speed) * (* speed);
        printf("KE of object is : %.2f Joules.",* K);
        
    }

    	
}


void potential_energy(float *m, float *h, float *P, float g)
{
    printf("Enter mass(kg):");
    scanf("%f\n",m);
    printf("Enter height (m):");
    scanf("%f\n",h);

    *P=(*m) *(* h)*g;
    printf("PE is: %f Joules.",*P);

}

int main()
{
    printf("This is a simple physics calculator\nThere will be more improvements in the future.");

    float speed, d, t, s, v, u, h, a, m, K, P;
    const float G = 6.6e-11;
    const float g = 9.8;

    char what_to_do[100];
    printf("Which problem to do\n");
    printf("Available problems:  find_speed,find_acceleration,find_height,kineticenergy,potentialenergy\n");
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

	else if ( strcmp(what_to_do, "find_kineticenergy")==0)
	{   

        
		printf("Kinetic energy calculations: find_v_from_K, find_K_from_v.\n");
		kineticenergy(&speed, &m, &K);
	}
	
    else if ( strcmp(what_to_do,"potentialenergy")==0)
    {
        printf("Potential energy calculations from m,g,h");
        potential_energy(&m,&h,&P,g);
    }
    
    return 0;
}
