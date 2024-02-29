#include <stdio.h>
 
#include <string.h>


// Driver code
int main()
{
  char planets[9][10] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", 
  "Uranus", "Neptune", "Pluto"};

  float planet_mass [9] = {0.3e24, 4.87e24, 5.97e24, 0.64e24, 1.89e27, 5.68e26, 
  8.68e25, 1.02e26, 1.31e22 } ;

  float planet_orbit [9] = {88, 225, 365, 687, 4333, 10747, 30589, 59800, 90560};

  char planet_name[30];
  char what_to_do[30];

  int n= sizeof(planets)/sizeof(planets[0]);

  float earth_mass=5.97e24;
  float earth_orbit_period=365;

  int i;

  printf("Welcome to solar system data application \nHere you will various information for planets\n");
  printf("What would you like to see? all_planet_masses, all_planet_orbits, specific_planet_data:\n");
  scanf("%s", what_to_do);
  
 
 // Display planet names, masses and their earth mass
  if ( strcmp (what_to_do,"all_planet_masses")==0)
  {

  // Basic planet name displayer
  printf("Welcome to solar system data application \nHere you will various information for planets\n");  
 
  printf("\nMass data of planets\n");
  for ( i = 0; i < n;i++)
  {
    printf("\n %s has mass %2.2f kg and \n %.3f Earth Mass\n",planets[i], planet_mass[i],planet_mass[i]/earth_mass);
  }


  }

// Orbital periods of all the planets
  else if (strcmp(what_to_do, "all_planet_orbits")==0)
{
    
    printf("\nOrbital periods of planets.\n");
    for (i =0; i<n; i++)
    {
      printf("\n%s has orbital period of %.2f earth days and %.2f earth years\n", planets[i], 
                                  planet_orbit[i], planet_orbit[i]/earth_orbit_period);
    }

}

//Fetch data of a certain planet

else if ( strcmp(what_to_do,"specific_planet_data")==0)
{

  printf("\nEnter planet name:\n");
  scanf("%s",planet_name);
  for ( i=0; i<n; i++)
  {
    if ( strcmp( planet_name, planets[i])==0)
    {
      printf("%s has mass %.2f earth mass, %.2f earth years to orbit ",
      planets[i], planet_mass[i]/earth_mass, planet_orbit[i]/earth_orbit_period);
    }
  }
}


  return 0;
}
