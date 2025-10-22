#include <stdio.h>
#include <math.h>

void calculaRaiz(int a, int b, int c);

int main() {
    
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    calculaRaiz(a, b, c);

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

void calculaRaizV2(int a, int b, int c) {
    
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
