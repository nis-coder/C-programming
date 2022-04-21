#include<stdio.h>
int main()
{
	int no,b,sum=0;
	printf("enter any number:");
	scanf("%d",&no);
	
	while(no!=0)	//condition
	
	{
		b=no%10;
		sum=sum+b;
		no=no/10;//decrement
	}
	printf("sum of digits=%d",sum);
}
