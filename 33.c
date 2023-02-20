//MULTIPLICATION TABLE UP TO HE RANGE GIVEN BY TE USER//
#include<stdio.h>
int main()
{
	int n,m,i;
	printf("ENTER THE VALUE OF n : \n ");
	scanf("%d",&n);
	printf("ENTER THE VALUE OF m : \n ");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d X %d = %d\n",i,n,i*n);
	}
	return 0;
}
