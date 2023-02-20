//P Q & R QUESTION//
#include<stdio.h>
int main ()
{
	int p,q,r,i;
	printf("entre the values of p,q and r\n :");
	scanf("%d%d%d",&p,&q,&r);
    printf("the numbers between %d and %d except %d :\n");
    for(i=p;i<=q;i++)
    { 
	if (i % 10 == r || i/10 == r)
	continue; 
	printf("%d\t",i); 
	}
	return 0;
}
