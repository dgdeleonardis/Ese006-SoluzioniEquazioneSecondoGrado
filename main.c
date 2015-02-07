#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funzioni.h"

int main(int argc, char** argv) {
    float a, b, c, soluzioneuno, soluzionedue;
    int onaco;
    printf("Inserisci il valore di a");
    scanf("%f", &a);
    printf("Inserisci il valore di b");
    scanf("%f", &b);
    printf("Inserisci il valore di c");
    scanf("%f", &c);
    onaco = esistonoSoluzioniReali(a,b,c);
    if (onaco) {
        esistonoSoluzioniReali(a , b, c);
    soluzioneuno = calcolaSoluzioneUno(a, b, c);
    soluzionedue = calcolaSoluzioneDue(a, b, c);
    printf("Le soluzioni sono %5.2f e %5.2f", soluzioneuno, soluzionedue);
    }
    else {
        printf("niente");
    }
    return (EXIT_SUCCESS);
}

