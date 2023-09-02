#include<stdio.h>
int main()
{
	int first_number,second_number,sum,sub,mul,div,mod;
	printf("enter the value of first_number");
	scanf("%d",&first_number);
	printf("enter the value of second_number");
	scanf("%d",&second_number);
	sum=first_number+second_number;
	sub=first_number-second_number;
	mul=first_number*second_number;
	div=first_number/second_number;
	mod=first_number%second_number;
	printf("%d\n,%d\n,%d\n,%d\n,%d\n",sum,sub,mul,div,mod);
	return 0;
}
