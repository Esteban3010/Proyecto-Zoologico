//
// Created by Asus on 28/03/2023.
//

#include "animal.h"
animal ::animal(string nombre, string especie, string alimentacion, int edad) :
nombre(nombre), especie(especie), alimentacion(alimentacion), edad(edad){}

void animal::mostrarInfo() {
    cout <<"nombre: " << nombre << endl;
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

void animal::setNombre(string nombre) {
    this->nombre = nombre;
}

void animal::setEspecie(string especie) {
    this->especie = especie;
}

void animal::setAlimentacion(string alimentacion) {
    this->alimentacion = alimentacion;
}

void animal::setEdad(int edad) {
    this->edad = edad;
}
