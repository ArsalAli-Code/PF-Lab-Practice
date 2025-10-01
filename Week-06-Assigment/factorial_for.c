#include <stdio.h>
int main() {
    int n = 5;
    int i;
    long long fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("%d! = %lld\n", n, fact);
    return 0;
}