//
// Created by Asus on 28/03/2023.
//

#ifndef PROYECTO_ANIMAL_H
#define PROYECTO_ANIMAL_H

#include <iostream>
#include <vector>
using namespace std;

class animal {
private:
    string nombre;
    string especie;
    string alimentacion;
    int edad;
public:
    animal(string,string,string,int);
    void mostrarInfo();
    void setNombre(string nombre);
    string getNombre();
    void setEspecie(string especie);
    string getEspecie();
    void setAlimentacion(string alimentacion);
    string getAlimentacion();
    void setEdad(int edad);
    int getEdad();



};


#endif //PROYECTO_ANIMAL_H
