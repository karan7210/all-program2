#include <stdio.h>

// function to find gcd of two integers
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}

// function to find lcm of two integers
int lcm(int a, int b)
{
    int gcd_value = gcd(a, b);
    if (gcd_value != 0)
        return (a*b)/gcd_value;
    else
        return 0;
}

int main()
{
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = lcm(num1, num2);
    printf("LCM of %d and %d is %d.\n", num1, num2, result);

    return 0;
}
