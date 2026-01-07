
// Step 1: Include the necessary header file
#include <stdio.h>

int main() {

    // Step 2:  Declare a file pointer variable
    FILE *filePtr;

// Open the file in write mode
// Step 3: Open the file using fopen()
 filePtr = fopen("example.txt", "w");

    // Check if the file was created successfully
    if (filePtr == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }

    printf("File created successfully.\n");

    // Step 4: Close the file
    fclose(filePtr);

    return 0;
}
