#include <stdio.h>

void swap_alternate_elements(int arr[], int size) {
    int i;
    for (i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int array1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    
    printf("Original Array1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    
    swap_alternate_elements(array1, size1);
    
    printf("\nSwapped Array1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    
    printf("\n\n");
    
    int array2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    printf("Original Array2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    
    swap_alternate_elements(array2, size2);
    
    printf("\nSwapped Array2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }
    
    return 0;
}
