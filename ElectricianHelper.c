#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	printf("Welcome to Electrician Helper!\n");

	int isActive = 1;
	while (isActive) 
	{
		int userInput = 0;
		printf("Please enter an integer to select an option...\n");
		
		printf("1. Ohm's Law\n");
		printf("2. Exit\n");
		int result = scanf("%d", &userInput);

		if (result != 1) 
		{
			printf("Invalid input\n");
			return 0;
		}

		switch(userInput) 
		{
			case 1: 
			{
				printf("1. Solve for Voltage\n");
				printf("2. Solve for Current\n");
				printf("3. Solve for Resistance\n");
				printf("4. Back\n");
				return 0;
			}
			
			case 2: 
			{
				isActive = 0;
				break;
			}

			default: 
			{
				printf("Please select a valid option!\n");
				break;
			}
			return 0;
		}
	}
	return 0;
}
