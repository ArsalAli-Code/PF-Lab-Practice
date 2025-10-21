#include <stdio.h>

int main() 
{
    int a[10], b[10];
    int n1, n2, i, j, count = 0;

    printf("Enter elements of first array (-1 to stop)\n");
    for(n1 = 0; ; n1++) 
    {
        printf(" %d element: ", n1 + 1);
        scanf("%d", &a[n1]);
        if(a[n1] == -1) break;
    }

    printf("Enter elements of second array (-1 to stop)\n");
    for(n2 = 0; ; n2++) 
    {
        printf(" %d element: ", n2 + 1);
        scanf("%d", &b[n2]);
        if(b[n2] == -1) break;
    }

    for(i = 0; i < n1; i++) 
    {
        for(j = 0; j < n2; j++) 
        {
            if(a[i] == b[j]) 
            {
                count++;
                break;
            }
        }
    }

    printf("Number of common elements: %d", count);

    return 0;
}