#include<stdio.h>
int mian()
{
	float x,y;
	pintf("please input a number");
	scanf("%f",&x);
	if(x<1)	y=x;
    if(x>=10) y=3*x-11;
	if(x>=1&&x<10) y=2*x-1;
    printf("%f",y);
    system("pause");
	return 0;
} 
