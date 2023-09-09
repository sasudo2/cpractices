#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Cannot open input file.\n");
        exit(1);
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file.\n");
        exit(1);
    }

    while ((ch = fgetc(inputFile)) != EOF)
        fputc(ch, outputFile);

    printf("File copied successfully.\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
