#include <stdio.h>

int factorial(int number)
{
    int result = 1;
    int i;

    for (i = 1; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}

int main()
{
    int number;
    int original;
    int digit;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    original = number;

    do
    {
        digit = number % 10;
        sum = sum + factorial(digit);
        number = number / 10;
    }
    while (number != 0);

    if (sum == original)
    {
        printf("%d is a strong number.\n", original);
    }
    else
    {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
