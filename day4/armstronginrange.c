#include <stdio.h>
int main()
 {
    int start, end, i, num, rem, sum, temp;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
     {
        num = i;
        sum = 0;
        while (num > 0) 
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        if (sum == i) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}