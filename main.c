#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototipi delle funzioni
int esistonoRadiciReali (float a, float b, float c);
float calcolaDelta (float, float, float);
float calcolaSoluzione1 (float, float, float);
float calcolaSoluzione2 (float, float, float);
void stampaRisultato(float,float);


int main(int argc, char** argv) {

    float a,b,c;
    
    printf("Risolutore di Equazioni di 2° Grado (a*x^2+b*x+c=0)\n");
    printf("Inserisci coefficente a: ");
    scanf("%f" , &a);
    printf("Inserisci coefficente b: ");
    scanf("%f" , &b);
    printf("Interisci coefficente c: ");
    scanf("%f" , &c);
    
    return (EXIT_SUCCESS);
}


int esistonoRadiciReali (float a, float b, float c) {
    float delta;
    float risultato;
    delta = calcolaDelta(a, b, c);
    if (delta<0)
    {
        risultato = 0; // falso
    }
    else {
        risultato = 1; // vero
    }
    
    return risultato;
}

float calcolaDelta (float a, float b, float c) {
    float risultato1; // Variabile Locale
    
    risultato1 = b*b-4*a*c;
    
    return risultato1;
}

float calcolaSoluzione1 (float a, float b, float c) {
    float risultato;
    risultato = (-b+sqrt(calcolaDelta(a,b,c)))/2*a;
    return 0;
}

float calcolaSoluzione2 (float a, float b, float c) {
    float risultato;
    risultato = (-b-sqrt(calcolaDelta(a,b,c)))/2*a;
    return 0;
}

void stampaRisultato(float x1, float x2) {
    printf("X1 e' uguale a: %f", x1);
    printf("\nX2 e' uguale a: %f", x2);
    return;
}


