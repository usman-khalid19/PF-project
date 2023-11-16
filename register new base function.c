#include<stdio.h>
#include<time.h>
#include<unistd.h>

void registernewbase()


{
	char rank[50], officialname[50], baselocation[50], destination[50];
	char rankoption;
	int baseduration, base_strength;
	printf("\nEnter your rank: ");
	printf("\n1. Colonel ---> C\n2. Lieutenant ---> L\n3. Major ---> M\n");
	scanf("%c", &rankoption);
	// printf("enter your name: ");
	// fgets(officialname, sizeof(officialname), stdin);
	// printf("location of base: ");
	// fgets(baselocation, sizeof(baselocation), stdin);
	// printf("your bease has been registered");
	switch (rankoption)
	{
	case 'C':
	case 'c':
	case 'L':
	case 'l':
	case 'M':
	case 'm':
		printf("\nEnter your name: ");
		scanf("%s", officialname);
		printf("\nEnter the location of your base: ");
		scanf("%s", baselocation);
		printf("\nEnter the base duration(in minutes): ");
		scanf("%d", &baseduration);
		printf("\nEnter the strength of your base: ");
		scanf("%d", &base_strength);	
		printf("\nEnter the destination of your base: ");
		scanf("%s", destination);
		printf("\nYour base has been registered.");
		break;
	
	default:
		printf("\nInvalid option");
		registernewbase();
	}
}


int main(){
	registernewbase();
	//apply delay functioon here of 5 seconds and then go back to menu//
	sleep(5);
	// menu();
	return 0;
}