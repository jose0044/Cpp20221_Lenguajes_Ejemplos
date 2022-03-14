//
// Created by Jose Jaramillo on 14/03/22.
//

#include "Planta.h"


float Planta::getAltura() {
    return altura;
}

char *Planta::getDescHojas() {
    return descHojas;
}

int Planta::getAlturaCultivo() {
    return alturaCultivo;
}

void Planta::setAltura(float pAltura) {
    altura = pAltura;
}

void Planta::setDescHojas(char *pDescHojas) {
    descHojas = pDescHojas;
}

void Planta::setAlturaCultivo(int pAlturaCultivo) {
    alturaCultivo = pAlturaCultivo;
}
