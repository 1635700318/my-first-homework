#include<stdio.h>
int mian()
{
int a,b,c,d,x;
printf("please input the first number:");
scanf("%d",&a);
printf("please input the second number:");
scanf("%d",&b);
if(a>b)
printf("%d%d,b,a");
printf("please input the third number:");
scanf("%d",&c);
if(c>a)
printf("%d%d%d,b,a,c");
printf("please input the fourth number:");
scanf("%d",&d);
if(d>c)
printf("%d%d%d%d,b,a,c,d");
return 0;
}
