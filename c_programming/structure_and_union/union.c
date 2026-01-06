#include <stdio.h>
#include <string.h>

union book{
    char name[100];
    float price;
    int page;
};

int main() {
    union book b1, b2;
    strcat(b1.name, "Python");
    b1.price = 700.50;
    b1.page = 100;

    printf("Book Name: %s\n", b1.name);
    printf("Book price: %.2f\n", b1.price);
    printf("Book pages: %d\n", b1.page);
    
    strcat(b2.name, "Java");
    b2.price = 500.50;
    b2.page = 200;

    printf("Book Name: %s\n", b2.name);
    printf("Book price: %.2f\n", b2.price);
    printf("Book pages: %d\n", b2.page);
    
   
    return 0;
}