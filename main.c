#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funzioni.h"

int main(int argc, char** argv) {
    float a, b, c, soluzioneUno, soluzioneDue;
    printf("Inserisci il valore di a : ");
    scanf("%f", &a);
    printf("Inserisci il valore di b : ");
    scanf("%f", &b);
    printf("Inserisci il valore di c : ");
    scanf("%f", &c);
    if (esistonoSoluzioniReali(a ,b ,c)) {
        soluzioneUno = calcolaSoluzioneUno(a ,b ,c);
        soluzioneDue = calcolaSoluzioneDue(a ,b ,c);
        stampaSoluzioni(soluzioneUno, soluzioneDue);
    }
    else {
        printf("L'equazione non ha soluzioni reali\n");
    }
    return (EXIT_SUCCESS);
}

