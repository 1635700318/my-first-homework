#include <stdio.h>
int main()
{
	float I,P;
	printf("please input the profit:\n");
	scanf("%f",I);
	if(I<=100000)
	{
		P=0.1*I;
		printf("the prize money is:%f\n",P);
	}
else if(I<=200000)
{
     	P=10000+(I-100000)*0.075;
		printf("the prize money is:%f\n",P);}
else if(I<=400000)
{
		P=10000+200000*0.075+0.05*(I-200000);
		printf("the prize money is:%f\n",P);}
else if(I<=600000)
{
		P=10000+200000*0.075+0.05*(I-400000);
		printf("the prize money is:%f\n",P);}	
else if(I<=1000000)
{
		P=10000+200000*0.075+0.05*(600000-400000)+0.015*(I-600000);
		printf("the prize money is:%f\n",P);}
		else
		{
		P=10000+200000*0.075+0.05*(600000-400000)+0.015*(1000000-600000)+0.01*(I-1000000);
		printf("the prize money is:%f\n",P);}
		return 0;
}
