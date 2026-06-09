#include <stdio.h>
int main()
 {
    int num, i;
    int n1 = 0, n2 = 1, digit;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (i = 1; i <= num; i++) {
        printf("%d ", n1);
        digit = n1 + n2;
        n1 = n2;
        n2 = digit;
    }

    return 0;
}