#include <stdio.h>
int main() {
    int n = 121;
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    if (reversed == original) printf("%d is a palindrome\n", original);
    else printf("%d is not a palindrome\n", original);
    return 0;
}