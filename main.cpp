#include <iostream>

void cambiarDenominadorCero(int *n2){
    if(*n2==0){
        *n2 = *n2+2;
    }
}

int divisionNumeros(int num1, int num2){
    if(num2==0){
        throw "ERROR: Division por cero no permitida!";
    }
    return num1 / num2;
}

int main() {
    int n1=30;
    int n2=0;
    cambiarDenominadorCero(&n2);
    try{
        std::cout << "Hola a todos!\n";
        std::cout << "El resultado de la division es: \n";
        std::cout << divisionNumeros(n1,n2)<<std::endl;
    } catch(const char *msg){
        std::cerr<<msg<<std::endl;
    }
    return 1;
}