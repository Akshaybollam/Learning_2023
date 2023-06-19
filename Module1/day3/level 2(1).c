#include <stdio.h>

// Function to set a specific bit of an 8-bit number
unsigned char setBit(unsigned char num, int position) {
    unsigned char mask = (1 << position);
    return (num | mask);
}

// Function to clear a specific bit of an 8-bit number
unsigned char clearBit(unsigned char num, int position) {
    unsigned char mask = ~(1 << position);
    return (num & mask);
}

// Function to toggle a specific bit of an 8-bit number
unsigned char toggleBit(unsigned char num, int position) {
    unsigned char mask = (1 << position);
    return (num ^ mask);
}

int main() {
    unsigned char number = 0x38; // Example 8-bit number: 00111000
    
    printf("Original Number: 0x%02x\n", number);
    
    // Set bit at position 3
    unsigned char setNumber = setBit(number, 3);
    printf("After Setting Bit: 0x%02x\n", setNumber);
    
    // Clear bit at position 5
    unsigned char clearNumber = clearBit(number, 5);
    printf("After Clearing Bit: 0x%02x\n", clearNumber);
    
    // Toggle bit at position 1
    unsigned char toggleNumber = toggleBit(number, 1);
    printf("After Toggling Bit: 0x%02x\n", toggleNumber);
    
    return 0;
}
