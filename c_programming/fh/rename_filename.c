
#include <stdio.h>

int main() {
    // Specify the old and new file names
    char oldName[] = "example.txt";
    char newName[] = "new_example.txt";

    // Attempt to rename the file
    int result = rename(oldName, newName);

    // Check if the file renaming was successful
    if (result == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Unable to rename the file.\n");
    }

    return 0;
}

