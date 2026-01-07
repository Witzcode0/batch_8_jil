#include <stdio.h>

int main() {
    FILE *fp;
    long size;

    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);   // go to end
    size = ftell(fp);        // get position
    rewind(fp);              // go back to start

    printf("File size = %ld bytes\n", size);

    fclose(fp);
    return 0;
}

