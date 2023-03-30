//
// Created by Asus on 28/03/2023.
//

#include "habitat.h"
using namespace std;

habitat::habitat(string nombre):
nombre(nombre){}

string habitat::getNombre() {
    return nombre;
}

void habitat::setNombre(string nombre) {
    this->nombre = nombre;

}

