#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
#include "calc.h"

typedef struct myFile {
    float a;
    float b;
    float c;
    int status;
}myFile;

struct myFile fileHandler() {
    const char *filepath = "input.txt";
    struct myFile myFile;
    myFile.status = 0;
    FILE *fptr;
    char buffer[256];
    int i = 0;

    fptr = fopen(filepath, "r");

    if(strlen(buffer) > 0 && buffer[strlen(buffer) - 1] == '\n')
        buffer[strlen(buffer) - 1] = '\0';

    if (fptr == NULL) {
        myFile.status = 1;
        printf("Error opening file!\n");
        return myFile;
    }

    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        sscanf(buffer,"%f%f%f", &myFile.a, &myFile.b, &myFile.c);
        calculaRaizFloat(myFile.a, myFile.b, myFile.c);
    }

    fclose(fptr);

    return myFile;
}