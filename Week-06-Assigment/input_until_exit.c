#include <stdio.h>
int main() {
    int x;
    printf("Enter numbers (0 to exit): ");
    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        printf("You entered: %d\n", x);
    }
    return 0;
}
