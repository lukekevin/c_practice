#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void find_kineticenergy(float *speed, float *m, float *K )
{

	printf("Val of u(m/s):\n");
	scanf("%f",speed);
	printf("Val of m(kg):\n");
	scanf("%f",m);

	* K=(0.5) * (* m) * (* speed) * (* speed);
	printf("KE of object is : %.2f Joules.",* K);
}

int main()
{
    printf("This is a simple physics calculator\nThere will be more improvements in the future.");

    float speed, d, t, s, v, u, h, a, m, K;
    const float G = 6.6e-11;
    const float g = 9.8;

    char what_to_do[100];

    printf("Which problem to do\n");
    printf("Available problems: \n find_speed, \n find_acceleration,\n find_height\n find_kineticenergy\n");
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
		printf("Find KE.\n");
		find_kineticenergy(&speed, &m, &K);
	}
	
    return 0;


}
