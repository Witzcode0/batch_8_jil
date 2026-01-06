// A pointer in C is a variable that stores the memory address of another variable.

// syntax:

// data_type *variable_name;

// variable_name = &another_variable;

#include <stdio.h>

int main() {
    
    int num = 10;
    int *ptr;
    
    ptr = &num;
    
    printf("ptr = %x\n", ptr);
    printf("*ptr = %d\n", *ptr);
    
    return 0;
}

// pointer to pointer

#include <stdio.h>

int main() {
    
    int num = 10;
    int *ptr;
    int **ptr1;
    
    ptr = &num;
    ptr1 = &ptr;
    
    printf("ptr = %x\n", ptr);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr1 = %d\n", **ptr1);
    
    return 0;
}

// call by reference

#include <stdio.h>

int add(int *a, int *b){
    printf("Total = %d", *a + *b);
}

int main() {
    int num1 = 10, num2 = 20;
    add(&num1, &num2);
   
    return 0;
}

// pointer to arithmatic