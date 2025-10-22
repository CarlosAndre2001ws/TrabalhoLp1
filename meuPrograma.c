#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LINES 100

struct myFile {
    char *lines[MAX_LINES];
    int tam;
    int status;
};

void calculaRaiz(int a, int b, int c);

void calculaRaizV2(struct myFile input);

void calculaRaizFloat(float a, float b, float c);

struct myFile fileHandler();

int main() {
    
    int a, b, c;
    
    struct myFile input = fileHandler();
    calculaRaizV2(input);

    return 0;
}

void calculaRaiz(int a, int b, int c) {
    
    if(a == 0) {
        printf("Dados inválidos, a operação não é uma operação de segundo grau\n");
        return;
    }
    
    int delta;
    float x1, x2;

    delta = pow(b,2) - 4 * a * c;

    if(delta < 0) {
        printf("Não existe raiz real para esses dados.\n");
        printf("delta = %d\n", delta);
        return;
    }

    if(delta == 0) {
        float raizUnica = -b/(2*a);
        printf("A equação possui apenas uma raiz: %.2f\n", raizUnica);
        return;
    }    

    x1 = (-b + sqrt(delta)) / (2 * a);

    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("Primeira raiz: %.2f\nSegunda raiz: %.2f\n", x1, x2);
    return;
}

void calculaRaizV2(struct myFile input) {


    for(int i = 0; i < input.tam; i++) {
        float a, b, c;
        sscanf(input.lines[i], "%f %f %f\n", &a, &b, &c);
        calculaRaizFloat(a, b, c);
    }
}

struct myFile fileHandler() {
    const char *filepath = "C:\\Users\\CARLOS.MAXIMIANO\\Documents\\trabalhosAva\\trabalhoLP1\\TrabalhoLp1\\input.txt";
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

    while (fgets(buffer, sizeof(buffer), fptr) != NULL && i < MAX_LINES) {
        myFile.lines[i] = malloc(strlen(buffer) + 1);
        strcpy(myFile.lines[i], buffer);
        i++;
        myFile.tam = i;
    }

    fclose(fptr);
    
    return myFile;
}

void calculaRaizFloat(float a, float b, float c) {

    if(a == 0) {
        printf("\nDados inválidos, a operação não é uma operação de segundo grau\n");
        return;
    }

    printf("\nDados sendo computados A = %.2f; B = %.2f; C = %.2f\n", a, b, c);
    
    int delta;
    float x1, x2;

    delta = pow(b,2) - 4.0 * a * c;

    if(delta < 0) {
        printf("\nNão existe raiz real para esses dados.\n");
        printf("delta = %d\n", delta);
        return;
    }

    if(delta == 0) {
        float raizUnica = -b/(2*a);
        printf("\nA equação possui apenas uma raiz: %.2f\n", raizUnica);
        return;
    }    

    x1 = (-b + sqrt(delta)) / (2 * a);

    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\nPrimeira raiz: %.2f\nSegunda raiz: %.2f\n", x1, x2);
    return;
}

