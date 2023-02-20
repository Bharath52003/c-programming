/*FACTORIAL OF THE GIVEN NUMBER*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int x=1,fact=1,n;
	printf("//program to find the factoril of the given number in the below//\n");
	printf("   \nenter a number:");
	scanf("%d",&n);
	while(x<=n)
	{
		fact=fact*x;
		x++;
	}
	printf("the factorial of %d is :%d",n,fact);
	getch();
	return 0;
}
