#include <stdio.h>


int reverseh(int n, int rev) {
    if (n == 0)
        return rev; 

    return reverseh(n / 10, rev * 10 + (n % 10));
}

int reverse(int n) {
    return reverseh(n, 0);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int sign = (num < 0) ? -1 : 1;
    num = (num < 0) ? -num : num;

    int reversed = reverse(num);

    printf("Reversed number = %d\n", sign * reversed);

    return 0;
}