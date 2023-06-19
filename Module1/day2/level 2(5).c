#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char *str) {
    int i;
    int length = strlen(str);
    
    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] = str[i] + 1;  // Increment ASCII value by 1
        }
    }
}

void decode(char *str) {
    int i;
    int length = strlen(str);
    
    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] = str[i] - 1;  // Decrement ASCII value by 1
        }
    }
}

int main() {
    char originalString[100];
    
    printf("Enter the string to encode: ");
    fgets(originalString, sizeof(originalString), stdin);
    
    // Remove trailing newline character
    originalString[strcspn(originalString, "\n")] = '\0';
    
    printf("\nOriginal String: %s\n", originalString);
    
    // Encode the string
    encode(originalString);
    printf("Encoded String: %s\n", originalString);
    
    // Decode the string
    decode(originalString);
    printf("Decoded String: %s\n", originalString);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode(char *str) {
    int i;
    int length = strlen(str);
    
    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] = str[i] + 1;  // Increment ASCII value by 1
        }
    }
}

void decode(char *str) {
    int i;
    int length = strlen(str);
    
    for (i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] = str[i] - 1;  // Decrement ASCII value by 1
        }
    }
}

int main() {
    char originalString[100];
    
    printf("Enter the string to encode: ");
    fgets(originalString, sizeof(originalString), stdin);
    
    // Remove trailing newline character
    originalString[strcspn(originalString, "\n")] = '\0';
    
    printf("\nOriginal String: %s\n", originalString);
    
    // Encode the string
    encode(originalString);
    printf("Encoded String: %s\n", originalString);
    
    // Decode the string
    decode(originalString);
    printf("Decoded String: %s\n", originalString);
    
    return 0;
}
