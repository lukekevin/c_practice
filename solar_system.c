#include <stdio.h>
#include <string.h>

// Driver code
int main()
{
  //Planet data
  char planets[9][10] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", 
  "uranus", "neptune", "pluto"};
  float planet_mass [9] = {0.3e24, 4.87e24, 5.97e24, 0.64e24, 1.89e27, 5.68e26, 
  8.68e25, 1.02e26, 1.31e22 } ;
  float planet_orbit [9] = {88, 225, 365, 687, 4333, 10747, 
                              30589, 59800, 90560};
  float planet_no_moons [9] = {0,0,1,2,79,83,27,14,1};
  float planet_radius [9] = {2440e3,6051e3,6371e3,3389e3,71492e3,
                            60268e3,25559e3,24764e3,1186e3};
  float planet_pressure [9] = {1e-15,92.0,1.0,0.006,1.5,1.0,1.0,1.0,1e-6} ;
  char  solid_surface [9][10] = {"yes", "yes", "yes", "yes", "no", "no", "no", "no", "yes"} ;
  
  // Comet data
  char comet_names [9] [50] = {"halleys", "hale-bopp", "Churyumov-Gerasimenko","Siding-Spring", " Shoemaker-Levy9", "Lovejoy", "Hyakutake", "ISON", "McNaught"};
  float comet_periods[] = {27750,1533000,2355,-1,-1,4204000,25550000,-1,-1};
  float comet_apogee_distances[] = {35, 370, 5.68, 35, -1, -1, 610, 900, -1, -1};
  float comet_perigee_distances[] = {0.59, 0.91, 1.24, 0.59, 1.4, -1, 0.81, 0.23, -1, -1};

  char planet_name[30];
  char what_to_do[30];
  const float G=6.6e-11;

  int n= sizeof(planets)/sizeof(planets[0]);

  int n1 = sizeof(comet_names)/sizeof(comet_names[0]);

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
  printf("What would you like to see? \nall_planet_masses, \nall_planet_orbits, \nspecific_planet_data, \nplanet_moons, \nall_planet_radius_smallg, \nmy_weight, \ncomet_data:\n");
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
      printf("%s has mass %.2f earth mass, \n %.2f earth years to orbit, \nradius %.2fm,\n g %.2fm/s^2, \n atm pressure %.2f atm \n and has solid/non solid surface %s \n ",
      planets[i], planet_mass[i]/earth_mass, planet_orbit[i]/earth_orbit_period, planet_radius[i], g[i], planet_pressure[i], solid_surface[i]);
    }
  }
}

//Pressure and Weight data on different planets
else if ( strcmp(what_to_do, "my_weight")==0)
{
  printf("Enter my mass:");
  scanf("%f",&my_mass);

  for (i=0;i<n;i++)
  {
    weight=my_mass*g[i];
    printf("Pressure is : %.2f and weight is : %.2f N on %s\n", planet_pressure[i], weight, planets[i]);
  }
}

// Comet data

else if ( strcmp(what_to_do, "comet_data")==0)
{
  printf("Displaying data for 9 most significant comets.");
  printf("If data given as -1 it means the value is uncertain here");
  for ( i = 0; i < n1; i++)
  {
    float comet_orbital_period_years = comet_periods[i]/365;

    printf("Comet %s takes %.2f days or %.2f Earth years to revolve,\n has %.2f AU as apogee and \n%.2f AU as perigee\n", 
    comet_names[i], comet_periods[i], 
    comet_orbital_period_years, comet_apogee_distances[i], 
    comet_perigee_distances[i]);
  }
}
  return 0;
}
