// #include <stdio.h>

// int main() {
//     float score = 156.78;
    
//     if(score >= 80){
//         printf("Grade A");
//     }else if (score >= 60){
//         printf("Grade B");
//     }else if(score >= 40){
//         printf("Grade C");
//     }else{
//         printf("Sorry, you are failed.");
//     }
    
    
//     return 0;
// }


#include <stdio.h>

int main() {
    float score = 86.78;
    
    if ((score <= 100) && (score >= 0)){
        if(score >= 80){
            printf("Grade A");
        }else if (score >= 60){
            printf("Grade B");
        }else if(score >= 40){
            printf("Grade C");
        }else{
            printf("Sorry, you are failed.");
        }
    } else {
        printf("Invalid Score!!!");
    }
    
    
    
    
    
    return 0;
}


