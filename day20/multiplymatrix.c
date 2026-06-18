#include <stdio.h>

int main()
 {
    int a[3][3], b[3][3], product[3][3];
    int i, j, k;

    printf("Enter elements of first matrix (3x3):\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (3x3):\n");
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++) 
        {
            product[i][j] = 0;
        }
    }

   
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 3; j++)
         {
            for(k = 0; k < 3; k++) 
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}