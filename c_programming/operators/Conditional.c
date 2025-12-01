#include <stdio.h>

int main() {
    float bal = 2000;
    float wb = 2200;
    // (condition) ? true : false;
    (wb <= bal) ? printf("Now, your remaining balance is: %.2f", bal-wb) : printf("Insufficent balance");
    return 0;
}