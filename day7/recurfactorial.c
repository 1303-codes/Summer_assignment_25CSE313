#include <stdio.h>
long long f(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * f(n - 1);  
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, f(num));
    }

    return 0;
}