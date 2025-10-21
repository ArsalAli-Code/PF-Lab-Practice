#include <stdio.h>

int main() 
{
    int a[100], b[100], res[100];
    int n1, n2, i, j, k = 0;
    int found, already;

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
        found = 0;
        for(j = 0; j < n2; j++) 
        {
            if(a[i] == b[j]) 
            {
                found = 1;
                break;
            }
        }
        if(found) 
        {
            already = 0;
            for(j = 0; j < k; j++) 
            {
                if(res[j] == a[i]) 
                {
                    already = 1;
                    break;
                }
            }
            if(!already)
                res[k++] = a[i];
        }
    }

    if(k == 0)
        printf("\nNo common elements.\n");
    else 
    {
        printf("\nIntersection: ");
        for(i = 0; i < k; i++)
            printf("%d ", res[i]);
    }

    return 0;
}
