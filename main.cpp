#include <iostream>
#include <vector>
#include "habitat.h"
#include "animal.h"
using namespace std;



vector<habitat> habitats;





void agregarHabitat(){


    string nombre;

    cout<<"nombre del habitat: "<< endl;
    cin>>nombre;

    habitat habitat1(nombre);
    habitats.push_back(habitat1);

}

void agregarAnimal(int contador){


    string nombre;
    string especie;
    string alimentacion;
    int edad;

    string grupo;

    cout<<"nombre del animal"<<endl;
    cin>>nombre;
    cout<<"especie de " << nombre << endl;
    cin>>especie;
    cout<<"alimentacion de " << nombre << endl;
    cin>>alimentacion;
    cout<<"edad de "<<nombre<<endl;
    cin>>edad;
    cout<<"habitat al que va agregar a " << nombre << endl;
    cin>>grupo;

    int i = 0;
    int bandera = 0;

    while(bandera == 0 and i < habitats.size()){
        if(habitats[i].getNombre() == grupo){
            animal animal1(nombre,especie,alimentacion,edad);
            habitats[i].animales.push_back(animal1);
            bandera = 1;
        }else{
            i = i+1;
        }

    }

    if(bandera == 0){
        cout<<"no se encontro el habitat "<<grupo<<endl;
    }


}

void infoHabitat(){

    if(habitats.size() > 0){
        for(int i = 0; i < habitats.size(); i++){
            cout<<"HABITAT: "<<habitats[i].getNombre()<< endl;
            if(habitats[i].animales.size() > 0){
                cout<<"ANIMALES: "<<endl;
                for(int j = 0; j < habitats[i].animales.size(); j++){
                    habitats[i].animales[j].mostrarInfo();
                    cout<<""<<endl;
                }
            }else{
                cout<<"no se encuentrar animales en este habitat"<<endl;
            }
            cout<<""<<endl;
        }
    }else{
        cout<<"no se encuentran habitats en el zoologico"<<endl;
    }



}

void eliminarHabitat(){
    string nombre;

    cout<<"nombre del habitat: "<< endl;
    cin>>nombre;

    int i = 0;
    int bandera = 0;
    while(bandera == 0 and i < habitats.size()){
        if(habitats[i].getNombre() == nombre){
            habitats.erase(habitats.begin()+i);
            bandera = 1;
        }else{
            i = i + 1;
        }
    }

    if(bandera == 0){
        cout<<"no se encontro el habitat "<< nombre <<endl;
    }




}

void eliminarAnimal(){
    string nombre;

    cout<<"nombre del animal: "<< endl;
    cin>>nombre;

    int bandera = 0;
    for(int i = 0; i < habitats.size(); i++){
        for(int j = 0; j < habitats[j].animales.size();j++){
            if(habitats[i].animales[j].getNombre() == nombre){
                habitats[i].animales.erase(habitats[i].animales.begin()+j);
                bandera = 1;
                if(bandera == 1){
                    break;
                }
            }
        }
        if(bandera == 1){
            break;
        }
    }


}

int main() {

    int opc = -1;
    int contador = 1;

    while(opc != 0){

        cout<<"   Zoologico" << endl;
        cout<<"[1] agregar un habitat" << endl;
        cout<<"[2] agregar un animal" << endl;
        cout<<"[3] visualizar info habitat" << endl;
        cout<<"[4] eliminar un habitat" << endl;
        cout<<"[5] eliminar un animal" << endl;
        cout<<"[0] salir"<<endl;
        cin>>opc;

        switch (opc) {
            case 1:
                agregarHabitat();
                cout<<""<<endl;
                break;
            case 2:
                agregarAnimal(contador);
                contador = contador + 1;
                cout<<""<<endl;
                break;
            case 3:
                infoHabitat();
                cout<<""<<endl;
                break;
            case 4:
                eliminarHabitat();
                cout<<""<<endl;
                break;
            case 5:
                eliminarAnimal();
                cout<<""<<endl;
                break;

        }
    }




    return 0;
}
