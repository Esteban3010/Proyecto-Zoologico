//
// Created by Asus on 28/03/2023.
//

#include "animal.h"
animal ::animal(int id,string nombre, string especie, string alimentacion, int edad) :
id(id),nombre(nombre), especie(especie), alimentacion(alimentacion), edad(edad){}

void animal::mostrarInfo() {
    cout <<"["<<id<<"] nombre: " << nombre << endl;
    cout <<"edad: " << edad << endl;
    cout <<"especie: " << especie << endl;
    cout <<"alimentacion: " << alimentacion << endl;
}

string animal::getEspecie() {
    return especie;
}

string animal::getNombre() {
    return nombre;
}

string animal::getAlimentacion() {
    return alimentacion;
}

int animal::getEdad() {
    return edad;
}



int animal::getId() {
    return id;
}


