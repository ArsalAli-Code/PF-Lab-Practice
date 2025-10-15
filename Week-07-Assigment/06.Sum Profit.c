#include <stdio.h>

int main() 
{
    int arr[10], i, sum = 0;
    
    for (i = 0; i < 10; i++) 
    {
        printf("Enter %d Profit And Loss Of Today: ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            sum = sum + arr[i];
    }
    
    printf("Sum Of Profit is %d", sum);
    return 0;
}
