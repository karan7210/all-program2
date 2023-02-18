#include<stdio.h>


int main()  {

    // add of fibonacci number.

int a;

int fibo = 0;

printf("enter the fibonacci number = ");
scanf("%d",&a);

for (int i =1; i<=a; i++)  {

fibo = fibo+i;  

}

printf("the fibonacci series are = %d",fibo);


    return 0;
}