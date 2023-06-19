#include <stdio.h>

int compare_boxes(int boxA[], int boxB[], int size) {
    int count[size];
    int i, j;
    
    // Initialize count array with all zeros
    for (i = 0; i < size; i++) {
        count[i] = 0;
    }
    
    // Count occurrences of items in boxA
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                count[i]++;
                break;
            }
        }
    }
    
    // Check if count array has all ones
    for (i = 0; i < size; i++) {
        if (count[i] != 1) {
            return 0;  // Return 0 if there is no one-to-one mapping
        }
    }
    
    return 1;  // Return 1 if there is a one-to-one mapping
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);
    
    int result = compare_boxes(boxA, boxB, size);
    
    printf("Equal Boxes Result: %d\n", result);
    
    int boxC[] = {200, 9, -90};
    int boxD[] = {-90, 200, 10};
    
    result = compare_boxes(boxC, boxD, size);
    
    printf("Unequal Boxes Result: %d\n", result);
    
    return 0;
}
