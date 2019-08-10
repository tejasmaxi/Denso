#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b,sum=0;
   scanf("%d%d",&a,&b);
   b=100-b;
   while(a>0)
   {
       sum=sum+a;
       a=(b*a)/100;
   }
   printf("%d",sum);
   return 0;
}
