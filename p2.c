#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter First Number: ");
	scanf("%d",&a);
printf("Enter Second Number: ");
	scanf("%d",&b);
	if (a==30 || b==30 || ((a+b)==30))
	{
		printf("Output : True\n");	
	}
	else
	{
		printf("Output : False\n");	
	}
}
