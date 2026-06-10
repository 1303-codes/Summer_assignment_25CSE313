#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0;  
    }
    return (n % 10) + sum(n / 10);  
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("Sum of digits = %d\n", sum(num));

    return 0;
}