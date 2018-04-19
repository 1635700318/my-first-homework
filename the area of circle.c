#include<stdio.h> 
#define PI 3.1415926
int main()
{
	float r,s;
	printf("please input radius of a circle:\n");
	scanf("%f",&r);
	s=PI*r*r;
	printf("PI=%.7f,r=%f\ns=%f\n",PI,r,s);
	return 0;
}







