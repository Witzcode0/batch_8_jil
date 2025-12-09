#include <stdio.h>

int main() {
    // Mon -0, Tue - 1... Sun - 6
    int day = 5;
    
    switch(day-1){
        case 0:
            printf("Today is Mon");
            break;
        case 1:
            printf("Today is Tue");
            break;
        case 2:
            printf("Today is Wed");
            break;
        case 3:
            printf("Today is Thu");
            break;
        case 4:
            printf("Today is Fri");
            break;
        case 5:
            printf("Today is Sat");
            break;
        case 6:
            printf("Today is Sun");
            break;
        default:
            printf("Invalid day");
    }
    
    return 0;
}