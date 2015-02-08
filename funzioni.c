#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcolaDelta(float a, float b, float c) {
    float delta;
    delta = b*b - 4*a*c;
    return delta;
}

int esistonoSoluzioniReali(float a, float b, float c) {
    float delta;
    delta = calcolaDelta(a, b, c);
    if (delta < 0) {
        return 0;
    }
    else {
        return 1;
    }
}

float calcolaSoluzioneUno(float a, float b, float c) {
    float delta, soluzioneUno;
    delta = calcolaDelta(a, b, c);
    soluzioneUno = (- b + sqrt(delta)) / (2*a);
    return soluzioneUno;
}

float calcolaSoluzioneDue(float a, float b, float c) {
    float delta, soluzioneDue;
    delta = calcolaDelta(a, b, c);
    soluzioneDue = (- b - sqrt(delta)) / (2*a);
    return soluzioneDue;
}
