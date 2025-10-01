#include <stdio.h>
int main() {
    int num, shift;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter shift value: ");
    scanf("%d", &shift);

    printf("\nOriginal number = %d\n", num);
    printf("Left shift by %d = %d\n", shift, num << shift);
    printf("Right shift by %d = %d\n", shift, num >> shift);

    return 0;
}
