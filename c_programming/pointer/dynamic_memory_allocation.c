#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(20);
    
    for (int i = 0; i < 5; i++)
        ptr[i] = i + 1;
        
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    return 0;
}


// -----------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int *ptr = (int *)calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++)
        ptr[i] = i + 1;
        
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);
    return 0;
}

// ------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)calloc(5, sizeof(int));
    
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
        
    free(ptr);
    
    return 0;
}

// -----------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }

    return 0;
}