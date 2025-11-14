#ifndef CALC_H
#define CALC_H

typedef struct myFile {
    float a;
    float b;
    float c;
    int status;
}myFile;

void calculaRaizFloat(float a, float b, float c);
struct myFile fileHandler();

#endif