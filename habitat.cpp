//
// Created by Asus on 28/03/2023.
//

#include "habitat.h"
using namespace std;

habitat::habitat(int id,string nombre):
id(id),nombre(nombre){}

string habitat::getNombre() {
    return nombre;
}

void habitat::setNombre(string nombre) {
    this->nombre = nombre;

}

int habitat::getId() {
    return id;
}

