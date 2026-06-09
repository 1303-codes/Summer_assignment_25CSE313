#include <stdio.h>

int main() 
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
     {
        i = b;
        b = a % b;
        a = i;
    }

    printf("GCD = %d\n", a);

    return 0;
}