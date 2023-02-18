#include <stdio.h>

int main()
{
    int number, originalNumber, reverseNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // reverse the number
    while (number != 0)
    {
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }

    // check if the number is a palindrome
    if (originalNumber == reverseNumber)
    {
        printf("%d is a palindrome.", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome.", originalNumber);
    }

    return 0;
}
