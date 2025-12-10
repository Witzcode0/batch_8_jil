// // #include <stdio.h>

// // int main() {
// //     while(1){
// //         printf("BIT\n");
// //     }

// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     int age;
//     float weight;
//     while(1){
//         printf("\nEnter Age: ");
//         scanf("%d", &age);
        
        
//         if (age >= 18){
//             if(weight >= 50){
//                 printf("Enter Weight: ");
//                 scanf("%f", &weight);
                
//                 printf("Age is: %d, And, Weight is %.2f\n", age, weight);
//                 printf("You can donate");
//             }else{
//                 printf("You can not donate");
//             }
//         }else{
//             printf("You can not donate");
//         }
//     }

//     return 0;
// }

// finite loop 

#include <stdio.h>

int main() {
    int start = 1, end = 10, table = 5;
    
    while(start <= end){
        printf("%d * %d = %d\n", table, start, table*start);
        start++;
    }
    

    return 0;
}