#include <stdio.h>

int main() {
    FILE *filePtr;
    char data[100];

    filePtr = fopen("example.txt", "r");

    if (filePtr == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Read entire file
    while (fgets(data, sizeof(data), filePtr) != NULL) {
        printf("%s", data);
    }

    fclose(filePtr);

    return 0;
}
