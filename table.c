#include<stdio.h>

int main() {

int a,n;

printf("enter the numer of table = ");
scanf("%d",&n);


for (int i=1; i<=10; i++)
{

a = n*i;

printf("%d * % d = %d\n",n,i,a);

}






    return 0;
}