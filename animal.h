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
    int id;
    string nombre;
    string especie;
    string alimentacion;
    int edad;
public:
    animal(int,string,string,string,int);
    void mostrarInfo();
    int getId();
    string getNombre();
    string getEspecie();
    string getAlimentacion();
    int getEdad();




};


#endif //PROYECTO_ANIMAL_H
