#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Could not open input file.\n");
        return 1;  
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Could not open output file.\n");
        fclose(inputFile);  
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
     
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("The sentence has been capitalized and written to output.txt.\n");

    return 0;
}
