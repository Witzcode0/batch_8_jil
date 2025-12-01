// Decimal -> Binary 
// Decimal <- Binary 

2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
128 64  32  16  8   4   2   1

// 3 - Decimal - 8bit
// 0011 - Binary

// 5 - Decimal - 8bit
// 0101 - Binary

// 17 - Decimal - 16bit
// 10001 - Binary

// 0 - false
// 1 - true

// A B & | ^ ~ 
// 3 5
// 0 0 0 0 0 
// 0 1 0 1 1
// 1 0 0 1 1
// 1 1 1 1 0

// 0001 - 1
// 0111 - 7
// 0110 - 6

// Why -6?

// a = 5 → 0000...0101

// ~a → 1111...1010

// In two’s complement, 1111...1010 = -6.

// Remember: ~x = -(x + 1)
// Check: ~5 = -(5 + 1) = -6 ✅


// <<, >>

// 7 - 
// 00000111    

// a = 7

// a << 3

// a >> 2

// 00000111  
// 00000001 - 1
// 00111000 - 56


// #include <stdio.h>

// void main() {
//     int a = 3, b = 5, c = 7;
    // int res = a & b;
    // int res = a | b;
    // int res = a ^ b;
    // int res = ~b;
    // int res = c << 3;
//     int res = c >> 2;
//     printf("%d", res);
// }