#include<stdio.h>
int main()
{
    int n;
    printf("enter the integer value to know the number of digits in it");
    scanf("%d",n);
      int i=0;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("the number of digits are:%d",i);
    return 0;
}