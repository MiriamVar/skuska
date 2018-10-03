#include <stdio.h>

int main()
{
	int number1,number2,i,j;
	
	
	printf("type a number1: ");
	scanf("%d", &number1);
	printf("type a number2: ");
	scanf("%d", &number2);
	
	for (i=1;i<=number1;i++)
	{
		for(j=1;j<=number2;j++)
		{
			printf("#");
		}
	printf("\n");
	}
}
