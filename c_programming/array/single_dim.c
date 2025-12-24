// #include <stdio.h>

// int main() {
//     int students[] = {
//         50, 87, 90, 56, 86, 95, 57, 79, 94, 90
//     };
    
    
//     printf("Size of whole array: %d\n", sizeof(students));
//     // Access sing element
//     printf("Size of first element of an array: %d\n", sizeof(students[0]));
//     printf("length of array is: %d\n",sizeof(students)/sizeof(students[0]));
    
//     int len = sizeof(students)/sizeof(students[0]);
//     // Access whole elements from the array using for
//     for(int start = 0; start<len; start++){
//         printf("Student-%d | Marks : %d\n",start+1, students[start]);
//     }
//     return 0;
// }

// --------------------------
// #include <stdio.h>

// int main() {
//     int total_student = 5;
//     int students[total_student];

//     printf("Size of whole array: %d\n", sizeof(students));
    
//     for(int start = 0; start<total_student; start++){
//         printf("\nEnter a student mark of student-%d : ", start+1);
//         scanf("%d", &students[start]);
//         // printf("%d\n", start+1);
//     }
    
//     for(int start = 0; start<total_student; start++){
//         printf("Student-%d | Marks : %d\n",start+1, students[start]);
//     }
   
  
//     return 0;
// }

// -----------------------------------
// #include <stdio.h>

// int main() {
//     int total_student = 5;
//     int students[total_student];

//     printf("Size of whole array: %d\n", sizeof(students));
    
//     for(int start = 0; start<total_student; start++){
//         printf("\nEnter a student mark of student-%d : ", start+1);
//         scanf("%d", &students[start]);
//         // printf("%d\n", start+1);
//     }
    
//     for(int start = 0; start<total_student; start++){
//          if(students[start] >= 80){
//             printf("Grade A |");
//             printf(" Student-%d | Marks : %d\n",start+1, students[start]);
//         }else if (students[start] >= 60){
//             printf("Grade B |");
//             printf(" Student-%d | Marks : %d\n",start+1, students[start]);
//         }else if(students[start] >= 40){
//             printf("Grade C |");
//             printf(" Student-%d | Marks : %d\n",start+1, students[start]);
//         }else{
//             printf("Sorry, you are failed. |");
//             printf(" Student-%d | Marks : %d\n",start+1, students[start]);
//         }
        
//     }
   
  
//     return 0;
// }


{20, 50, 30, 57, 26, 49}