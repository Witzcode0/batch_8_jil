#include <stdio.h>

// A B C && ||
// T T T T  T
// F T T F  T
// T F T F  T
// T T F F  T
// F F F F  F

// A !
// T F
// F T

void main() {
    
    int c1 = 0; // false
    int c2 = 1; // true
    int c3 = 20 < 50; // true
    int c4 = 20 == 50; // false
    
    // printf("%d\n", c1 && c2);
    // printf("%d\n", c1 && c3);
    // printf("%d\n", c2 && c3);
    // printf("%d\n", c1 || c3);
    // printf("%d\n", c1 || c3 && c2);
    // printf("%d\n", c1 || (c3 && c2) || (c1 && c4) && c3);
    // f || t || f && t
    // f || t || f
    // t || f
    // t
    
    // printf("%d", !(c3 && c2));
    
}