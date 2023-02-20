/*TO FIND THE LENGTH OF THE STRING USING POINTERS*/
#include<stdio.h>
int main()
{
	char str[100],*pt;
	int i=0;
	printf("entre a string :");
	gets(str);
	pt=str;
	while(*pt!='\0')
{
	i++;
	pt++;
	}	

printf("length of string:%d",i);
return 0;
}
