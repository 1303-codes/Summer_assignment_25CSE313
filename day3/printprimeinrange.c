#include <stdio.h>

int main() 
{
    int initial, end, i, j, Prime;

    printf("Enter start of range: ");
    scanf("%d", &initial);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", initial, end);

    for (i = initial; i <= end; i++) 
    {
        if (i < 2)
            continue;

            Prime = 1;

        for (j = 2; j * j <= i; j++) 
        {
            if (i % j == 0)
             {
                Prime = 0;
                break;
            }
        }

        if (Prime)
            printf("%d ", i);
    }

    return 0;
}