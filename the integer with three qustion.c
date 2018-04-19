#include <stdio.h>
int main()
  {
	 int a, b, c, d, e, x;
    printf("Please input a number <=99999: ");
    scanf("%ld", &x);
    a=x/10000;       
    b=x%10000/1000;  
    c=x%1000/100;    
    d=x%100/10;     
    e=x%10;          
    if(a != 0)
        printf("It is a 5 number, %ld %ld %ld %ld %ld\n",e,d,c,b,a); 
    else if(b != 0)
        printf("It is a 4 number, %ld %ld %ld %ld\n",e,d,c,b);
    else if(c != 0)
        printf("It is a 3 number,%ld %ld %ld\n",e,d,c) ;
    else if(d != 0)
        printf("It is a 2 number, %ld %ld\n",e,d); 
    else if(e != 0)
        printf("It is a 1 number,%ld\n",e);
        return 0;
  }
  
  