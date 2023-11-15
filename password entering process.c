#include<stdio.h>
int main ()
{
	int password = 54321, cnt = 0, i, userpassword;
	printf("welcome to baseops pro! Enter the password: ");
	for (i=1; i<=3; i++)
	{
		scanf("%d", &userpassword);
		if(userpassword != password)
		{
			if(cnt != 2)
			{
				printf("wrong entry! Retry...");
			}
			cnt++;
			if(cnt == 3)
			{
				printf("\n\nlocked from system!");
				break;
			}
		}
		else
		{
			printf("correct! Welcome...");
			break;
		}
	}
}
