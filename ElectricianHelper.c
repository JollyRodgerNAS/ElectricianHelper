#include <stdio.h>
#include <stdlib.h>

float ohmsLawCalculator(void);

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
				float result = ohmsLawCalculator();
				if (result == -1) 
				{
					printf("Error!\n");
					continue;
				}
				else if (result == 0)
				{
					continue;
				}
				printf("Your result is: %.2f\n", result);
				break;
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
		}
	}
	return 0;
}

float ohmsLawCalculator(void) 
{
	printf("1. Solve for Voltage\n");
	printf("2. Solve for Current\n");
	printf("3. Solve for Resistance\n");
	printf("4. Back\n");

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
					float voltage = 0;
					float current = 0;
					float resistance = 0;
					printf("Enter your Current(Amperes): ");
					scanf("%f", &current);
					printf("Enter your Resistance(Ohms): ");
					scanf("%f", &resistance);

					voltage = current * resistance;

					return voltage;
				}

				case 2: 
				{
					float voltage = 0;
					float current = 0;
					float resistance = 0;
					printf("Enter your Voltage: ");
					scanf("%f", &voltage);
					printf("Enter your Resistance(Ohms): ");
					scanf("%f", &resistance);

					current = voltage / resistance;

					return current;
				}

				case 3: 
				{
					float voltage = 0;
					float current = 0;
					float resistance = 0;
					printf("Enter your Voltage: ");
					scanf("%f", &voltage);
					printf("Enter your Current(Amperes): ");
					scanf("%f", &current);

					resistance = voltage / current;

					return resistance;

				}

				case 4: 
				{
					return 0;
				}
			
				default: 
				{
					printf("Please select a valid option!\n");	
					break;
				}
			}

		}	

	}
	
	return -1;
}
