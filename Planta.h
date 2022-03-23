//
// Created by Jose Jaramillo on 14/03/22.
//

#ifndef C___PLANTA_H
#define C___PLANTA_H


class Planta {
protected:
    float altura;
    char* descHojas;
    int alturaCultivo;
public:
    float getAltura();
    char* getDescHojas();
    int getAlturaCultivo();
    void setAltura(float pAltura);
    void setDescHojas(char* pDescHojas);
    void setAlturaCultivo(int pAlturaCultivo);

    Planta();
};


#endif //C___PLANTA_H
