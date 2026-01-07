
#include <stdio.h>

int main() {
    // Specify the file name to be deleted
    char fileName[] = "example.txt";

    // Attempt to delete the file
    int result = remove(fileName);

    // Check if the file deletion was successful
    if (result == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }

    return 0;
}

