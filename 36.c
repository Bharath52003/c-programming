//program to find the number of factors for the given number//
#include<stdio.h>
int main()
{
	signed num;
	int i,factor=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factor++;
		}
	}
	printf("numder of factors for the given number =%d",factor);
	return 0;
}
