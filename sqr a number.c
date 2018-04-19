#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("please input a number and it is less than 1000:\n");
	scanf("%f",&a);
	if(a>0&&a<1000)
{	b=sqrt(a);
	printf("%d",b);} 
	else
	printf("please input a number again");
	scanf("%f",&a);
	}
	
	