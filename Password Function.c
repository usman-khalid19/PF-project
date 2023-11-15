#include<stdio.h>
void password ()
{
	int password = 54321, cnt = 0, i, userpassword;
	printf("Welcome to BaseOps Pro!\nEnter the password: ");
	for (i=1; i<=3; i++)
	{
		scanf("%d", &userpassword);
		if(userpassword != password)
		{
			if(i == 1 || i == 2){
				printf("\nYou have entered wrong password!\nTry Again.... (%d tries left)\n", 3-i);
			}
			if(i == 3){
				printf("\nUnauthorized Access Alert!!!\nSystem Criticality Compromised!!!");
			}
		}
		else
		{
			printf("Correct! Welcome...");
			break;
		}
	}
}

int main(){
	password();
	return 0;
}
