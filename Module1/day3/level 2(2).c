#include <stdio.h>

// Function to convert a decimal number to BCD format
unsigned char decimalToBCD(unsigned char decimal) {
    return ((decimal / 10) << 4) | (decimal % 10);
}

int main() {
    unsigned char decimalNumber = 37; // Example decimal number
    
    printf("Decimal Number: %d\n", decimalNumber);
    
    unsigned char bcdNumber = decimalToBCD(decimalNumber);
    
    printf("BCD Number: 0x%02x\n", bcdNumber);
    
    return 0;
}
