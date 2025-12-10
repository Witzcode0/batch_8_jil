#include <stdio.h>

int main() {
    int start = 1, end = 10, table = 5;
    
   for(start; start<=end; start++){
        printf("%d * %d = %d\n", table, start, table*start);
   }

    return 0;
}

#include <stdio.h>

// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int row = 1; row<= num;row++){
            printf("* ");
        }
        printf("\n");
    }
    
   

    return 0;
}

#include <stdio.h>

// *
// * * 
// * * *  
// * * * *  
// * * * * * 

int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row; col++){
            printf("* ");
        }
        printf("\n");
    }
    
   

    return 0;
}

        * 
      * * 
    * * * 
  * * * * 
* * * * * 

#include <stdio.h>

// - - - - * 4 1
// - - - * * 3 2
// - - * * * 2 3
// - * * * * 1 4 
// * * * * * 0 5

int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col <= num -row; col++){
            printf("  ");
        }
        for(int col = 1; col<= row; col++){
            printf("* ");
        }
        printf("\n");
    }
    
   

    return 0;
}

#include <stdio.h>

// * * * * * 0 5
// - * * * * 1 4 
// - - * * * 2 3
// - - - * * 3 2
// - - - - * 4 1

int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row-1; col++){
            printf("  ");
        }
        for(int col = 1; col <= num -row+1; col++){
            printf("* ");
        }
        printf("\n");
    }
    
   

    return 0;
}

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

#include <stdio.h>

int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col <= num -row; col++){
            printf("  ");
        }
        for(int col = 1; col<= row; col++){
            printf("* ");
        }
        for(int col = 1; col<= row-1; col++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

#include <stdio.h>
// * * * * *
// * * * *
// * * * 
// * *
// *
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row-1; col++){
            printf("  ");
        }
        for(int col = 1; col <= num -row+1; col++){
            printf("* ");
        }
        for(int col = 1; col <= num - row; col++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 