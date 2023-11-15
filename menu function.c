#include<stdio.h>
void menu()
{
	int option;
	printf("Select your operations:\n");
	printf("(1) register\n(2) check details of base\n(3) inventory\n(4)  recruits");
	scanf("%d", &option);
	switch(option)
	{
		case(1):
			registerbase();
		case(2):
			currentBaseDetails();
		case(3):
			Inventory();
		case(4):
			recruits();
	}
}

