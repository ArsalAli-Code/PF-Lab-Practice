#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int index = 1;  // pointer for the next unique element
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", k);
    printf("Modified Array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}