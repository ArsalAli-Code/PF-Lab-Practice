#include <stdio.h>

int main() {
    int a[100], b[100], u[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter elements of first array (-1 to stop)\n");
    
    for(n1 = 0; ; n1++) 
    {
        printf(" %d element: ",n1+1);
        scanf("%d", &a[n1]);
        if(a[n1] == -1) break;
    }

    printf("Enter elements of second array (-1 to stop)\n");
    for(n2 = 0; ; n2++) 
    {
        printf(" %d element: ",n2+1);    
        scanf("%d", &b[n2]);
        if(b[n2] == -1) break;
    }

    for(i = 0; i < n1; i++) 
    {
        found = 0;
        for(j = 0; j < k; j++)
            if(a[i] == u[j]) { found = 1; break; }
        if(!found) {u[k++] = a[i]; }
    }

    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < k; j++)
            if(b[i] == u[j]) { found = 1; break; }
        if(!found) {u[k++] = b[i]; }
    }

    printf("Union: ");
    for(i = 0; i < k; i++) 
        {printf("%d ", u[i]); }

    return 0;
}
