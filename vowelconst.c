#include<stdio.h>

int main()  {

char ch;

printf("enter the charctor = ");
scanf("%c",&ch);

if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' );


    // if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )


{     printf("the character %c is vowel.\n",ch);

} else

printf("the character %c is consonent.\n",ch);

return 0;

}