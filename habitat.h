//
// Created by Asus on 28/03/2023.
//

#ifndef PROYECTO_HABITAT_H
#define PROYECTO_HABITAT_H

#include <iostream>
#include <vector>
#include "animal.h"
using namespace std;
class habitat {

private:
    string nombre;
public:
    habitat(string);
    void setNombre(string);
    string getNombre();
    vector<animal> animales;

};


#endif //PROYECTO_HABITAT_H
