#include<stdio.h>
int main()
 {
    int n,i,s;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("multiplication table of %d is ",n);
    for(i=1;i<=10;i++)
    {
        s=n*i;
        printf("\t \n %dx%d=%d",n,i,s);
    }
    return 0;
}