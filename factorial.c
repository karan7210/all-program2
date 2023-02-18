#include<stdio.h>



int main()  {
   int fact=1;
   int n;
   printf("please enter number :  ");
   scanf("%d",&n);

   for (int i = 1; i <= n; i++)

   {

    fact=fact*i;

   }
   printf("the factorial of %d = %d",n,fact);
      



    return 0;
}