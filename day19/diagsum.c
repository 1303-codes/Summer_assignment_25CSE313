#include <stdio.h>

int main() 
{
    int a[3][3];
    int i, j, sum = 0;

    printf("Enter elements of a 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

   
    for(i = 0; i < 3; i++) 
    {
        sum += a[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}