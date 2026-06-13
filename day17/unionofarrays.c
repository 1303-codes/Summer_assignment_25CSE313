#include <stdio.h>

int main() 
{
    int a[100], b[100], unionArr[200];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
     {
        scanf("%d", &a[i]);
        unionArr[k++] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &b[i]);

        flag = 0;
        for(j = 0; j < k; j++) 
        {
            if(unionArr[j] == b[i]) 
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0) 
        {
            unionArr[k++] = b[i];
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) 
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}