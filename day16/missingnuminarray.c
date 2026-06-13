#include <stdio.h>

int main() 
{
    int arr[100], n, i, total, sum = 0, missing;

    printf("Enter the value of n (max number): ");
    scanf("%d", &n);

    printf("Enter %d elements (numbers from 1 to %d with one missing):\n", n - 1, n);
    for(i = 0; i < n - 1; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}