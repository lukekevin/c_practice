#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int english, hindi, marathi, history, geography, maths, science, art;
	int total_marks, obtained_marks;
	double percentage;
	
	printf("Enter English Marks:\n");
	scanf("%d",&english);
	printf("Enter Hindi Marks:\n");
	scanf("%d",&hindi);
	printf("Enter Marathi Marks:\n");
	scanf("%d",&marathi);
	printf("Enter History Marks:\n");
	scanf("%d",&history);
	printf("Enter Geography Marks:\n");
	scanf("%d",&geography);
	printf("Enter Maths Marks:\n");
	scanf("%d",&maths);
	printf("Enter Science Marks:\n");
	scanf("%d",&science);
	printf("Enter Art Marks:\n");
	scanf("%d",&art);


	total_marks=800;
	obtained_marks=english+hindi+marathi+history+geography+maths+science+art;

	percentage=(double)obtained_marks/total_marks*100;

	if (percentage<(35.0)){
		printf("You have recieved E. You have failed.\n");
	}
	else if (percentage>= (35.00) && percentage < (50.00))
	{
		printf("You have recieved D.\n");
		
	}
	else if (percentage>=(50.00) && percentage<(80.00))

	{
		printf("You have recieved C OR B grade.\n");	

	}
	
	else if (percentage>=(80.00) && percentage<(90.00))
	{
		printf("You have recieved A grade.\n");
	}

	else {
		printf("No grades available");
	}
	
	



	printf("Total marks out of 800: %d \n", obtained_marks);

	printf("Percentage Obtained: %f \n", percentage);

	return 0;

	

}
