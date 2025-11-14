#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
#include "calc.h"




/*void calculaRaiz(int a, int b, int c);

void calculaRaizV2(struct myFile input);*/

struct myFile fileHandler();

int main() {
    
    struct myFile input = fileHandler();

    return 0;
}

/*void calculaRaiz(int a, int b, int c) {
    
    if(a == 0) {
        printf("Dados inválidos, a operação não é uma operação de segundo grau\n");
        return;
    }
    
    int delta;
    float x1, x2;

    delta = pow(b,2) - 4 * a * c;

    if(delta < 0) {
        printf("Não existe raiz real para esses dados.\n");
        double complex deltaComplexo = pow(b,2) - 4 * a * c * I;
        printf("delta complexaaaao = %lf*I", creal(deltaComplexo));
        printf("deltaa = %d\n", delta);
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
}*/



/*void calculaRaizFloat(float a, float b, float c) {

    if(a == 0) {
        printf("\nDados inválidos, a operação não é uma operação de segundo grau\n");
        return;
    }

    printf("\nDados sendo computados A = %.2f; B = %.2f; C = %.2f\n", a, b, c);
    
    float delta;
    float x1, x2;

    delta = pow(b,2) - 4.0 * a * c;

    if(delta < 0) {
        printf("\nNão existe raiz real para esses dados.\n");
        double complex deltaComplexo = csqrt(pow(b,2) - 4 * a * c);

        float complex cx1 = (-b + deltaComplexo) / (2 * a);
        float complex cx2 = (-b - deltaComplexo) / (2 * a);

        printf("\nPrimeira raiz complexa: real(%.2f) imaginaria(%.2f)\nSegunda raiz complexa: real(%.2f) imaginaria(%.2f)\n", creal(cx1), cimag(cx1),creal(cx2), cimag(cx2));

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
}*/

