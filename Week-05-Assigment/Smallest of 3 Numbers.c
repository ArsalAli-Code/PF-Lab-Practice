#include <stdio.h>
int main() {
    int a, b, c, smallest;
    
    printf("Enter First numbers: ");
    scanf("%d", &a);
    printf("Enter Second numbers: ");
    scanf("%d", &b);
    printf("Enter Third numbers: ");
    scanf("%d", &c);
    
    
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("\nSmallest = %d", smallest);
    return 0;
}
