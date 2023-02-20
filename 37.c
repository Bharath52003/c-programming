// TO PRINT THE NUMBER OF LOWER_CASE,UPPR_CASE,DIGITS AND SPECIALS IN THE STRING GIVEN BY THE USER// 
#include<stdio.h>
int main ()
{
	char str[100];
	int i,lower_case,upper_case,digits,specials;
	i=lower_case=upper_case=digits=specials=0;
	printf("enter any string :");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			lower_case++;
		}
		else if(str[i]>='A'&& str[i]<='Z')
		{
			upper_case++;
		}
		else if(str[i]>='0'&& str[i]<='9')
		{
			digits++;
		}
		else
		specials++;
		i++;
	}
	printf("\n number of lower_cases in the string = %d",lower_case);
	printf("\n number of upper_cases in the string = %d",upper_case);
	printf("\n number of digits in the string = %d",digits);
	printf("\n number of specials in the string = %d",specials);
	return 0;
}
