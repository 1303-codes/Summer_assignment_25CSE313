#include<stdio.h>
int main()
{
    int original,n,reverse=0,digit;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original=reverse)
        printf("the number entered is a palindrome");
    else 
    printf("the number entered is not a palindrome");
    return 0;
}