#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funzioni.h"

int main(int argc, char** argv) {
    float a, b, c, soluzioneUno, soluzioneDue;
    int verificaSoluzioni;
    printf("Inserisci il valore di a : ");
    scanf("%f", &a);
    printf("Inserisci il valore di b : ");
    scanf("%f", &b);
    printf("Inserisci il valore di c : ");
    scanf("%f", &c);
    verificaSoluzioni = esistonoSoluzioniReali(a ,b ,c);
    if (verificaSoluzioni) {
        esistonoSoluzioniReali(a ,b, c);
    soluzioneUno = calcolaSoluzioneUno(a ,b ,c);
    soluzioneDue = calcolaSoluzioneDue(a ,b ,c);
    printf("Le soluzioni sono %5.2f e %5.2f\n", soluzioneUno, soluzioneDue);
    }
    else {
        printf("L'equazione non ha soluzioni reali\n");
    }
    return (EXIT_SUCCESS);
}

