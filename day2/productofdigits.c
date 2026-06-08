#include<stdio.h>
int main()
{
    int n,digit,product=1;

    printf("enter the number:");
    scanf("%d", &n);
    while(n != 0)
    {
       digit = n % 10;
       product = product * digit;
       n /= 10;
    }
    printf("the product of digits is %d", product);
    return 0;
}