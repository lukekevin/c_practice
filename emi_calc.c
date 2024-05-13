#include <stdio.h>
#include <math.h>
#include <string.h>
int main () 
        {
        float principal;
        float years;
        float interest_rate;
        float emi;
        char bank[20];


        printf("Enter principal amount borrowed\n");
        scanf("%f",&principal);

        printf("Enter years of loan\n");
        scanf("%f", &years);




        printf("Enter initials of bank name:\n");
        scanf("%s", bank);


        if (strcmp(bank,"SBI")==0)
        {

        interest_rate=8.0;

        }

        else if (strcmp(bank,"ICICI")==0)
        {

        interest_rate=9.9;

        }

        else if (strcmp(bank,"HSBC")==0)
        {

        interest_rate=9.7;

        }

        else if (strcmp(bank,"ICICI")==0)
        {

        interest_rate=9.1;

        }


        float monthly_interest_rate= interest_rate/12/100; // in decimal values instead of percent
                                                     

        emi = principal * monthly_interest_rate * (pow(1+monthly_interest_rate,years)/ (pow(1+monthly_interest_rate,years)-1));

        printf("The emi for %s bank is %.2f Rs",bank,emi);


        return 0;
                

        }

// gcc emi_calc.c -o emi_calc -lm  && ./emi_calc   this is the command for terminal when using math.h file

