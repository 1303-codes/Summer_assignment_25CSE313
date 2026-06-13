#include <stdio.h>

int main() 
{
    int arr[100], freq[100];
    int n, i, j, count, maxFreq;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;   
    }
    for(i = 0; i < n; i++)
     {
        count = 1;
        for(j = i + 1; j < n; j++)
         {
            if(arr[i] == arr[j])
             {
                count++;
                freq[j] = 0; 
            }
        }

        if(freq[i] != 0)
         {
            freq[i] = count;
        }
    }
    maxFreq = freq[0];
    for(i = 1; i < n; i++)
     {
        if(freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
        }
    }
    printf("Element(s) with maximum frequency (%d):\n", maxFreq);
    for(i = 0; i < n; i++) 
    {
        if(freq[i] == maxFreq)
         {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}