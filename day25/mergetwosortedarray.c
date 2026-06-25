#include <stdio.h>

int main()
 {
    int a[100], b[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
     {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
     {
        scanf("%d", &b[i]);
    }

    i = j = k = 0;

    while(i < n1 && j < n2)
     {
        if(a[i] <= b[j])
         {
            merged[k++] = a[i++];
        } else 
        {
            merged[k++] = b[j++];
        }
    }

    while(i < n1) 
    {
        merged[k++] = a[i++];
    }

    while(j < n2) 
    {
        merged[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for(i = 0; i < k; i++)
     {
        printf("%d ", merged[i]);
    }

    return 0;
}