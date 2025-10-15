#include <stdio.h>

int main() 
{
    int arr[12], n, i, j, count = 0;
    
    printf("Input 12 Numbers In Array\n");
    
    for (i = 0; i < 12; i++) 
    {   printf("%d number is ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nInput Numbers You Want To Remove \n");
    scanf("%d", &n);
    
    for (i = 0; i < 12; i++) 
    {
        if (arr[i] == n)
            count++;
        else 
            arr[i - count] = arr[i];
    }
    
    for (i = 0; i < 12 - count; i++)
        printf("%d ", arr[i]);
    
    return 0;
}