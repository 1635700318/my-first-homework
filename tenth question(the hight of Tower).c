#include<stdio.h >
int mian()
{
	double x,y;
	double absx,absy;
	scanf("%lf,%lf",&x,&y);
	absx=fabs(x)-2;
	absy=fabs(y)-2;
	if((absx*absx=absy*absy)<=1)
	{
		printf("hight=10");
	}
else{
	printf("hight=0");
}
return 0;
}
