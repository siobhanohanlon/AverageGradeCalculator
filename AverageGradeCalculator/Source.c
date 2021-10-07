#include<stdio.h>

void main()
{
	//Declare Variables
	float grade1, grade2, grade3, average;

	//Ask User to input Grades and assign to variables
	printf("Please enter Grade 1, 2 and 3 in decimal form\n");
	scanf("%f %f %f", &grade1, &grade2, &grade3);

	//Calculate Average of Grades
	average = ((grade1 + grade2 + grade3)/3);

	//Display Average to Screen
	printf("\nThe average of the 3 grades is %.2f", average);

	//Display if Average mark is a pass
	if (average > 40)
	{
		printf("\nCongratulations the average mark for this class has passed!!!");
	}

	else
	{
		printf("\nSorry the average for this class didnt pass! :(");
	}
	
	//Skip lines after display
	printf("\n\n");
}
