#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num ^ (1 << 1);
    printf("Original: %d\n", num);
    printf("After toggling 2nd bit: %d\n", result);

    return 0;
}
