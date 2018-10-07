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
				for(i=num;num>=1;i--)
				{
					{
						if(num%2==0)
						{
							num=num/2;
							printf("%d ", num);
							if(num==1)
								break;
						}
						else
						{
							num=(num*3)+1;
							printf("%d ", num);
							if(num==1)
								break;	
						}
					}
				}
			}
			else
			{
				for(i=num;num>=1;i--)
				{
					{
						if(num%2==1)
						{
							num=(num*3)+1;
							printf("%d ", num);
							if(num==1)
								break;
						}
						else
						{
							num=num/2;
							printf("%d ", num);
							if(num==1)
								break;
						}
					}
				}
			}
	}
}
