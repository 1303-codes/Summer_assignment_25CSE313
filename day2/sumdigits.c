#include<stdio.h>
int main()
{
   int num,dig,sum=0;
   printf("enter the number:");
   scanf("%d", &num);
   int original = num;

   if (num < 0) {
      num = -num;
   }

   while (num != 0)
   {
         dig = num % 10;
         sum = sum + dig;
         num /= 10;
   }

   printf("sum of the digits of %d is %d\n", original, sum);
   return 0;
}
