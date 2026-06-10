#include <stdio.h>
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
     {
        fact *= i;
    }
    return fact;
}

int main() 
{
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
     {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong number\n", num);
    else
        printf("%d is not a Strong number\n", num);

    return 0;
}