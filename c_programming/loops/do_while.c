#include <stdio.h>

int main() {
    int start = 1, end = 10, table = 5;
    
    do{
        printf("%d * %d = %d\n", table, start, table*start);
        start++;
    }while(start <= end);
    

    return 0;
}