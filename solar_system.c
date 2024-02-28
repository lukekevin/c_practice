#include <stdio.h>
 
// Driver code
int main()
{
  char planets[9][20] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", 
  "Venus", "Neptune", "Pluto"};
  
  // Basic planet name displayer
  printf("Welcome to solar system data application \nHere you will various information for planets\n");
  printf("The list of planets are:\n");

  int n= sizeof(planets)/sizeof(planets[0]);
   
  for (int i = 0; i < n; i++) 
  {
    printf("%s\n", planets[i]);
  }

  // Display planet names, masses and their earth mass
  float planet_mass [10] = {0.3e24, 4.87e24, 5.97e24, 0.64e24, 1.89e27, 5.68e26, 
  8.68e25, 1.02e26, 1.31e22 } ;
  printf("\nMass data of planets\n");
  for ( int i = 0; i < n;i++)
  {
    printf("\n %s has mass %2.2f kg and \n %.3f Earth Mass\n",planets[i], planet_mass[i],planet_mass[i]/5.97e24);
  }

  // Orbital periods of all the planets
  float planet_orbit [10] = {88, 225, 365, 687, 4333, 10747, 30589, 59800};
  printf("\nOrbital periods of planets.\n");
  for ( int i =0; i<n; i++)
  {
    printf("\n%s has orbital period of %.2f earth days\n", planets[i], planet_orbit[i]);
  }

  
  return 0;
}