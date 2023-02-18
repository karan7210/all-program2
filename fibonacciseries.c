#include<stdio.h>


int main()  {

int a = 0;
 int b = 1;
 int n,c,i;

 printf("enter the any number for fibonacci series = ");
scanf("%d",&n);

 for (i=1; i<=n; i++);  {

printf("%d ",a);

 c=a+b;

 a=b;

 b=c;

 }

    return 0;
}