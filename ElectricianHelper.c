#include <stdio.h>
#include <stdlib.h>

int ohmsLawCalculator(void);

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
			printf("Invalid input! Try again...\n");
		        int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
	
		}

		switch(userInput) 
		{
			case 1: 
			{
				int result = ohmsLawCalculator();
				if (result == -1) 
				{
					printf("Error!\n");
					return 0;
				}
				printf("Your voltage is: %d\n", result);
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

int ohmsLawCalculator(void) 
{
	printf("1. Solve for Voltage\n");
	printf("2. Solve for Current\n");
	printf("3. Solve for Resistance\n");

	int isActive = 1;
	int userInput = 0;

	while (isActive) 
	{
		int result = scanf("%d", &userInput);
		
		if (result != 1) 
		{
			printf("Invalid input! Try again...\n");
			int c;
			while ((c = getchar()) != '\n' && c != EOF);
			continue;
		}
		else 
		{
			switch(userInput) 
			{
				case 1:
				{
					int voltage = 0;
					int current = 0;
					int resistance = 0;
					printf("Enter your Current(Amperes): ");
					scanf("%d", &current);
					printf("\n");
					printf("Enter your Resistance(Ohms): ");
					scanf("%d", &resistance);
					printf("\n");

					voltage = current * resistance;

					return voltage;
				}
			
				default: 
				{
					printf("Please select a valid option!\n");	
					continue;
				}
			}

		}	

		return -1;
	}
	
	return 0;
}
