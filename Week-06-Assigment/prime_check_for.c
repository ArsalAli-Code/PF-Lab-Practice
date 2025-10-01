#include <stdio.h>
int main() {
    int n = 7;
    int i, isPrime = 1;
    if (n <= 1) isPrime = 0;
    for (i = 2; i * i <= n && isPrime; i++)
        if (n % i == 0) isPrime = 0;
    if (isPrime) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    return 0;
}
