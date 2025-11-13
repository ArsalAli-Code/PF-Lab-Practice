#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int size = 2 * n;
    int nums[size], result[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        result[index++] = nums[i];
        result[index++] = nums[i + n];
    }

    printf("Shuffled Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
