#include <stdio.h>

int main ()
{
	int num,a,b;
	
	printf("Type a number(3-10 000): ");
	scanf("%d",&num);
	
	if(num<3)
	{
		printf("You typed wrong number.");
	}
	if(num>10000)
	{
		printf("You typed wrong number.");
	}
	while(num!=1)
	{
		if(num%2==0)
	{
		a=num/2;
		printf("%d",a);
	}
	else
	{
		b=(num*3)+1;
		printf("%d",b);
	}
	return 0;
	}
}
