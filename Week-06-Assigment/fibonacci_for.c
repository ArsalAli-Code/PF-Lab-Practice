#include <stdio.h>
int main() {
    int i, n = 10;
    int a = 0, b = 1, next;
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
