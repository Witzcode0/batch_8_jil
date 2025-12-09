#include <stdio.h>

int main() {
    int age;
    float weight;
    
    printf("Enter Age: ");
    scanf("%d", &age);
    
    
    if (age >= 18){
        if(weight >= 50){
            printf("Enter Weight: ");
            scanf("%f", &weight);
            
            printf("Age is: %d, And, Weight is %.2f\n", age, weight);
            printf("You can donate");
        }else{
            printf("You can not donate");
        }
    }else{
        printf("You can not donate");
    }
    return 0;
}