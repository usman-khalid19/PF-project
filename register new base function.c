#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int registernewbase()
{
	char rank[50], officialname[50], baselocation[50], destination[50];
	char rankoption;
	int baseduration, base_strength, scanf_res;

	printf("\nEnter your rank: ");
	printf("\n1. Colonel ---> C\n2. Lieutenant ---> L\n3. Major ---> M\n");
	scanf("%c", &rankoption);
	if (rankoption == 'C' || rankoption == 'c')
	{
		strcpy(rank, "Colonel");
	}
	else if (rankoption == 'L' || rankoption == 'l')
	{
		strcpy(rank, "Lieutenant");
	}
	else if (rankoption == 'M' || rankoption == 'm')
	{
		strcpy(rank, "Major");
	}
	switch (rankoption)
	{

	case 'C':
	case 'c':
	case 'L':
	case 'l':
	case 'M':
	case 'm':
		printf("\nYour rank is: %s (FOR TESTING PURPOSE ONLY)", rank);
		printf("\nEnter your name: ");
		scanf("%s", officialname);
		printf("\nEnter the location of your base: ");
		scanf("%s", baselocation);
		printf("\nEnter the base duration(in minutes): ");
		scanf("%d", &baseduration);
		scanf_res = scanf("%d", &baseduration);
		if (scanf_res != 1)
		{
			printf("\nInvalid Base Duration Entered!\n\n");
			return 0;
		}
		printf("\nEnter the strength of your base: ");
		scanf("%d", &base_strength);
		scanf_res = scanf("%d", &base_strength);
		if (scanf_res != 1)
		{
			printf("\nInvalid Base Strength Entered!\n\n");
			return 0;
		}
		printf("\nEnter the destination of your base: ");
		scanf("%s", destination);
		printf("\nYour base has been registered.");
		// It will then give the output accordingly, such as the amount of weaponry, vehicles, food etc. required for the camp.
		// Working on this part
		int provisions[3] = {0, 0, 0};
		// provisions[0] = weapons
		// provisions[1] = vehicles
		// provisions[2] = food
		if (base_strength <= 100)
		{
			provisions[0] = 10;
			provisions[1] = 5;
			provisions[2] = 10;
		}
		else if (base_strength > 100 && base_strength <= 200)
		{
			provisions[0] = 20;
			provisions[1] = 10;
			provisions[2] = 20;
		}
		else if (base_strength > 200 && base_strength <= 300)
		{
			provisions[0] = 30;
			provisions[1] = 15;
			provisions[2] = 30;
		}
		else if (base_strength > 300 && base_strength <= 400)
		{
			provisions[0] = 40;
			provisions[1] = 20;
			provisions[2] = 40;
		}
		else if (base_strength > 400 && base_strength <= 500)
		{
			provisions[0] = 50;
			provisions[1] = 25;
			provisions[2] = 50;
		}
		else if (base_strength > 500 && base_strength <= 600)
		{
			provisions[0] = 60;
			provisions[1] = 30;
			provisions[2] = 60;
		}
		else if (base_strength > 600 && base_strength <= 700)
		{
			provisions[0] = 70;
			provisions[1] = 35;
			provisions[2] = 70;
		}
		else if (base_strength > 700 && base_strength <= 800)
		{
			provisions[0] = 80;
			provisions[1] = 40;
			provisions[2] = 80;
		}
		else if (base_strength > 800 && base_strength <= 900)
		{
			provisions[0] = 90;
			provisions[1] = 45;
			provisions[2] = 90;
		}
		else if (base_strength > 900 && base_strength <= 1000)
		{
			provisions[0] = 100;
			provisions[1] = 50;
			provisions[2] = 100;
		}
		else if (base_strength > 1000 && base_strength <= 1100)
		{
			provisions[0] = 110;
			provisions[1] = 55;
			provisions[2] = 110;
		}
		else if (base_strength > 1100 && base_strength <= 1200)
		{
			provisions[0] = 120;
			provisions[1] = 60;
			provisions[2] = 120;
		}
		else if (base_strength > 1200 && base_strength <= 1300)
		{
			provisions[0] = 130;
			provisions[1] = 65;
			provisions[2] = 130;
		}
		else if (base_strength > 1300 && base_strength <= 1400)
		{
			provisions[0] = 140;
			provisions[1] = 70;
			provisions[2] = 140;
		}
		else if (base_strength > 1400 && base_strength <= 1500)
		{
			provisions[0] = 150;
			provisions[1] = 75;
			provisions[2] = 150;
		}
		else if (base_strength > 1500 && base_strength <= 1600)
		{
			provisions[0] = 160;
			provisions[1] = 80;
			provisions[2] = 160;
		}
		else if (base_strength > 1600 && base_strength <= 1700)
		{
			provisions[0] = 170;
			provisions[1] = 85;
			provisions[2] = 170;
		}
		else if (base_strength > 1700 && base_strength <= 1800)
		{
			provisions[0] = 180;
			provisions[1] = 90;
			provisions[2] = 180;
		}
		else if (base_strength > 1800 && base_strength <= 1900)
		{
			provisions[0] = 190;
			provisions[1] = 95;
			provisions[2] = 190;
		}
		else if (base_strength > 1900 && base_strength <= 2000)
		{
			provisions[0] = 200;
			provisions[1] = 100;
			provisions[2] = 200;
		}
		else
		{
			provisions[0] = 210;
			provisions[1] = 105;
			provisions[2] = 210;
		}

		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				printf("\nWeapons required: %d", provisions[i]);
			}
			else if (i == 1)
			{
				printf("\nVehicles required: %d", provisions[i]);
			}
			else if (i == 2)
			{
				printf("\nFood required: %d ration bags", provisions[i]);
			}
		}
		// It will also give a designated ID for that base.
		//  Working on this part
		int baseID;
		srand(time(NULL));
		baseID = rand() % 1000;
		printf("\nYour base ID is: %d", baseID);
		break;

	default:
		printf("\nInvalid Option Entered!\nExiting The Program\n");
		break;
	}

	return 0;
}

int main()
{
	registernewbase();
	// apply delay functioon here of 1 seconds and then go back to menu//
	sleep(1);
	// menu();
	return 0;
}