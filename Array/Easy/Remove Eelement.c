#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0; // Pointer for the position to place the non-val elements

    // Traverse the array
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            // Place the current element at the k-th position
            nums[k] = nums[i];
            k++; // Move the pointer to the next position
        }
    }

    // Return the number of elements not equal to val
    return k;
}

// Example usage:
int main() {
    int nums[] = {3, 2, 2, 3, 4, 5, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int newLength = removeElement(nums, numsSize, val);

    printf("New length: %d\n", newLength);
    printf("Modified array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
