#include <stdio.h>
#include <string.h>

void sort_names(char *names[], int size) {
    int i, j;
    char *temp;
    
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-i-1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);
    int i;
    
    printf("Names before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
    
    sort_names(names, size);
    
    printf("\nNames after sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}
