#include <stdio.h>

void reverseString(char s[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);

    char s[n + 1];
    printf("Enter %d characters (continuous, no spaces): ", n);
    scanf("%s", s);

    reverseString(s, n);

    printf("Reversed String: %s\n", s);

    return 0;
}
