#include <stdio.h>
 #include <string.h>

// Driver code
int main()
{
  char planets[9][10] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", 
  "uranus", "neptune", "pluto"};

  float planet_mass [9] = {0.3e24, 4.87e24, 5.97e24, 0.64e24, 1.89e27, 5.68e26, 
  8.68e25, 1.02e26, 1.31e22 } ;

  float planet_orbit [9] = {88, 225, 365, 687, 4333, 10747, 
                              30589, 59800, 90560};

  float planet_no_moons [9] = {0,0,1,2,79,83,27,14,1};

  float planet_radius [9] = {2440e3,6051e3,6371e3,3389e3,71492e3,
                            60268e3,25559e3,24764e3,1186e3};

  char planet_name[30];
  char what_to_do[30];
  const float G=6.6e-11;

  int n= sizeof(planets)/sizeof(planets[0]);

  float earth_mass=5.97e24;
  float earth_orbit_period=365;
  float weight;   //weight of any object on a planet
  float my_mass; //My mass

  int i; // iterable i

  // find val of small g and store it in an array
  float g[9]; // empty array for storing g vals
  for (i=0;i<n;i++)
  {
    g[i] = G*planet_mass[i]/(planet_radius[i]*planet_radius[i]);

  }

  printf("Welcome to solar system data application \nHere you will various information for planets\n");
  printf("What would you like to see? \nall_planet_masses, \nall_planet_orbits, \nspecific_planet_data, \nplanet_moons, \nall_planet_radius_smallg, \nmy_weight:\n");
  scanf("%s", what_to_do);
  
  

 // Display planet names, masses and their earth mass
  if ( strcmp (what_to_do,"all_planet_masses")==0)
  {

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

//Planet moon data
else if ( strcmp (what_to_do, "planet_moons")==0)
{
  printf("\nPLanet Moons\n");

  for ( i=0; i<n; i++)
  {
    printf("\n %s has %.1f moons", planets[i], planet_no_moons[i]);
  }

}

//Planet radius and small g value
else if (strcmp( what_to_do, "all_planet_radius_smallg")==0 )
{
  printf("All Planet radius and small g\n");
  for (i=0;i<n;i++)
  {
    printf("\n%s has radius of %.2f km\n with g=%.2fm/s^2", planets[i], planet_radius[i], g[i]);
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
      printf("%s has mass %.2f earth mass, %.2f earth years to orbit,radius %.2fm,g %.2fm/s^2 \n ",
      planets[i], planet_mass[i]/earth_mass, planet_orbit[i]/earth_orbit_period, planet_radius[i], g[i]);
    }
  }

}

//Weight calculator on different planets
else if ( strcmp(what_to_do, "my_weight")==0)
{
  printf("Enter my mass:");
  scanf("%f",&my_mass);

  for (i=0;i<n;i++)
  {
    weight=my_mass*g[i];
    printf("Weight is : %.2f N on %s\n", weight, planets[i]);

  }
  
}

  return 0;
}
