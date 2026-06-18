#include <stdio.h>

int main() 
{
    int a[3][3], transpose[3][3];
    int i, j;

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
        for(j = 0; j < 3; j++) 
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++)
         {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}