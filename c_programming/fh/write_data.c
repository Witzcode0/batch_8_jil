
#include <stdio.h>

int main() {
    FILE *filePtr;
    char data[100];

    // Open the file in write mode
    filePtr = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Get input from the user
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    // Write the data to the file
    fprintf(filePtr, "%s", data);

    // Close the file
    fclose(filePtr);

    printf("Data written to the file successfully.\n");

    return 0;
}

