//  a function is a self-contained, reusable block of code that performs a specific task. Functions are essential for organizing large programs into smaller, manageable modules, which improves readability, maintainability, and code reusability. 

// Syntax: return_type function_name(parameter_list);

// Syntax : 

// return_type function_name(parameter_list) {
    // function body (statements to be executed)
    // optional return statement
// }

// function call
// function_name(values)

// #include <stdio.h>

// int main() {
//     int add(int a, int b){
//         printf("%d", a + b);
//     }
//     add(10, 20);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int add(int a, int b){
//         printf("%d\n", a + b);
//     }
//     add(10, 20);
//     add(100, 200);

//     return 0;
// }


// with return type and with para
// #include <stdio.h>

// int main() {
//     int add(int a, int b){
//         printf("%d\n", a + b);
//     }
//     add(10, 20);
//     add(100, 200);

//     return 0;
// }
// with return type and without para
// #include <stdio.h>

// int main() {
//     int add(){
//         int a = 10, b = 20;
//         printf("%d\n", a + b);
//     }
//     add();

//     return 0;
// }
// without return type and with para

// #include <stdio.h>

// int main() {
//     void add(int a, int b){
//         printf("%d\n", a + b);
//     }
//     add(200, 400);

//     return 0;
// }
// without return type and without para
// #include <stdio.h>

// int main() {
//     void add(){
//         int a = 10, b = 20;
//         printf("%d\n", a + b);
//     }
//     add();

//     return 0;
// }


//  local and global variable

// #include <stdio.h>

// int main() {
//     int g_var = 10; // global var
//     void test(){
//         int g_var = 20; // local var
//         printf("%d\n", g_var);
//     }
//     test();
//     printf("%d\n", g_var);

//     return 0;
// }


// Without recursion
// #include <stdio.h>

// // 1 + 2 + 3 + .... + n;
// int main() {
//     int end;
//     printf("Enter a num : ");
//     scanf("%d", &end);
    
//     int total = 0;
    
//     for(int start = 1; start <= end; start++){
//         total += start;
//     }
    
//     printf("Total = %d", total);
//     return 0;
// }


// With recursive function
// #include <stdio.h>

// 1 + 2 + 3 + .... + n;

// int recursive_sum(int num){
//     if(num == 0){
//         return 0;
//     }else if (num == 1){
//         return 1;
//     }else{
//         return num + recursive_sum(num - 1);
//     }
    
// }
// int main() {
//     printf("%d", recursive_sum(10));
//     return 0;
// }


// #include <stdio.h>

// // 1 * 2 * 3 * .... * n;

// int recursive_mul(int num){
//     if(num == 0){
//         return 0;
//     }else if (num == 1){
//         return 1;
//     }else{
//         return num * recursive_mul(num - 1);
//     }
    
// }
// int main() {
//     printf("%d", recursive_mul(10));
//     return 0;
// }