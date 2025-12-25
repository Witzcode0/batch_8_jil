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

//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 

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

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

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

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

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

//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 

// #include <stdio.h>

// int main() {
//     int num = 5;
//     for(int row = 1; row<= num;row++){
//         for(int col = 1; col <= num -row; col++){
//             printf("  ");
//         }
//         for(int col = 1; col<= row; col++){
//             printf("* ");
//         }
//         for(int col = 1; col<= row-1; col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int row = 1; row<= num;row++){
//         for(int col = 1; col<= row; col++){
//             printf("  ");
//         }
//         for(int col = 1; col <= num -row; col++){
//             printf("* ");
//         }
//         for(int col = 1; col <= num - row-1; col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row; col++){
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}


// https://www.ascii-code.com/
// 48 - 0
// 57 - 9
// 65 - A
// 90 - Z
// 97 - a
// 122 - z


// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

// #include <stdio.h>
// int main() {
//     int num = 5;
//     for(int row = 1; row<= num;row++){
//         for(int col = 1; col<= row; col++){
//             printf("%c ", row + 64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

A 
A B 
A B C 
A B C D 
A B C D E 

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row; col++){
            printf("%c ", col + 64);
        }
        printf("\n");
    }
    return 0;
}

// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= num;col++){
            if(row == 1 || row == num || col == 1 || col == num){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}



// * * * * *
//  *       *
//   *       *
//    *       *
//     * * * * *

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row-1; col++){
            printf("- ");
        }
        for(int col = 1; col<= num;col++){
            if(row == 1 || row == num || col == 1 || col == num){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}



//     * * * * *
//    *       *
//   *       *
//  *       *
// * * * * *

// - - - - * * * * * 
// - - - *       * 
// - - *       * 
// - *       * 
// * * * * * 

// #include <stdio.h>
// int main() {
//     int num = 5;
//     for(int row = 1; row<= num;row++){
//         for(int col = 1; col <= num -row; col++){
//             printf("- ");
//         }
//         for(int col = 1; col<= num;col++){
//             if(row == 1 || row == num || col == 1 || col == num){
//                 printf("* ");
//             }else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>
int main() {
    int num = 5;
    int g_var = 1;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= row; col++){
            printf("%d ", g_var);
            g_var++;
        }
        printf("\n");
    }
    return 0;
}


1 0 1 0 1 
1 0 1 0 1 
1 0 1 0 1 
1 0 1 0 1 
1 0 1 0 1 

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= num; col++){
            if(col % 2 == 0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}


// 1 1 1 1 1 
// 0 0 0 0 0 
// 1 1 1 1 1 
// 0 0 0 0 0 
// 1 1 1 1 1 

#include <stdio.h>
int main() {
    int num = 5;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= num; col++){
            if(row % 2 == 0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}


// 0 1 0 1 0 
// 1 0 1 0 1 
// 0 1 0 1 0 
// 1 0 1 0 1 
// 0 1 0 1 0 

#include <stdio.h>
int main() {
    int num = 5;
    int flag = 0;
    for(int row = 1; row<= num;row++){
        for(int col = 1; col<= num; col++){
            if(flag == 0){
                printf("0 ");
                flag = 1;
            }else{
                printf("1 ");
                flag = 0;
            }
        }
        printf("\n");
    }
    return 0;
}


// https://witzcode.pythonanywhere.com/technology/2/55/?wz_tech=C%20programming&wz_category=Number-Patterns

5 4 3 2 1 
  4 3 2 1 
    3 2 1 
      2 1 
        1
             
        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5

5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1

#include <stdio.h>
//            row num
// 5 4 3 2 1  1   5 - 0 = 5
// 4 3 2 1    2   5 - 1 = 4
// 3 2 1      3   5 - 2 = 3
// 2 1        4   5 - 3 = 2
// 1          5   5 - 4 = 1
int main() {
    int num = 5;
    for(int row = 1; row <= num; row++){
        for(int col = num - row + 1; col >= 1; col--){
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}