#include <stdio.h>

void moveZeroes(int nums[], int n) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    while (index < n) {
        nums[index++] = 0;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    printf("Resulting Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}