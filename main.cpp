#include <iostream>
#include <vector>
#include "habitat.h"
#include "animal.h"
#include <algorithm>
using namespace std;




vector<habitat> habitats;





void agregarHabitat(int id){


    string nombre;
    int opc;
    string tipo[4] = {"selvatico","desertico","artico","acuatico"};
    for(int i = 0; i < 4; i++){
        cout<<"["<<i+1<<"] "<<tipo[i]<<endl;
    }

    cout<<"tipo de habitat para agregar: "<< endl;
    cin>>opc;

    /*verifica si la opcion que digito pertenece a las opciones disponibles*/
    if(opc <= 0 or opc > 4){
        int bandera = 0;
        while(bandera == 0){
            cout<<"opcion no valida, digite uno de los habitat disponibles"<<endl;
            cin>>opc;
            if(opc > 0 and opc <= 4){
                bandera = 1;
            }

        }
    }else{
        nombre = tipo[opc-1];
    }



    habitat habitat1(id,nombre);
    habitats.push_back(habitat1);

}

void agregarAnimal(int id){

    string selvatico[11] = {"selvatico","Leon","Tigre","Puma","Elefante","Mono","Gorila","Chiguiro","Orangutan","Ocelote","Pangolino"};
    string desertico[11] = {"desrtico","Coyote", "Escorpión", "Jabalí", "Cobra", "Búho", "Gacela de Grant", "Serpiente cascabel", "Canguro ratón", "Geco leopardo", "Ardilla"};
    string artico[11] = {"artico","Oso polar", "Zorro ártico", "Morsa", "Foca de Groenlandia", "Ballena beluga", "Caribú", "León marino", "Liebre ártica", "Búho nival", "Narval"};
    string acuatico[11] = {"acuatico","Delfín", "Ballena jorobada", "Tiburón blanco", "Tortuga marina", "Manatí", "Pingüino emperador", "Pez payaso", "Pulpo", "Foca común", "Estrella de mar"};

    string tipo[4] = {"selvatico","desertico","artico","acuatico"};

    string grupo;
    string nombre;
    string especie;
    string alimentacion;
    int edad;

    int opc;
    cout<<"habitat al que va agregar el animal"<< endl;
    for(int i = 0; i < habitats.size(); i++){
        cout<<"["<<i+1<<"] "<<habitats[i].getNombre()<<endl;
    }
    cin>>opc;

    /*verifica si la opcion que digito pertenece a las opciones disponibles*/
    if(opc <= 0 or opc > habitats.size()){
        int bandera = 0;
        while(bandera == 0){
            cout<<"opcion no valida, digite uno de los habitat disponibles"<<endl;
            cin>>opc;
            if(opc > 0 and opc <= habitats.size()){
                bandera = 1;
            }

        }
    }else{
        grupo = habitats[opc-1].getNombre();
    }




    cout<<"nombre del animal"<<endl;
    cin>>nombre;

    cout<<"especie de "<< nombre << endl;


    int bandera2 = 0;


    if(habitats[opc-1].getNombre() == "selvatico"){
        for(int i = 1; i < 11; i++){
            cout<<"["<<i<<"] "<<selvatico[i]<<endl;
        }
        cin>>opc;
        if(opc <= 0 or opc > 10){

            while(bandera2 == 0){
                cout<<"opcion no valida, digite una de las especies disponibles"<<endl;
                cin>>opc;
                if(opc > 0 and opc <= 10){
                    bandera2 = 1;
                }

            }
        }else{
            especie = selvatico[opc];
        }

    }

    else if(habitats[opc-1].getNombre() == "desertico"){
        for(int i = 1; i < 11; i++){
            cout<<"["<<i<<"] "<<desertico[i]<<endl;
        }
        cin>>opc;
        if(opc <= 0 or opc > 10){

            while(bandera2 == 0){
                cout<<"opcion no valida, digite una de las especies disponibles"<<endl;
                cin>>opc;
                if(opc > 0 and opc <= 10){
                    bandera2 = 1;
                }

            }
        }else{
            especie = desertico[opc];
        }

    }

    else if(habitats[opc-1].getNombre() == "artico"){
        for(int i = 1; i < 11; i++){
            cout<<"["<<i<<"] "<<artico[i]<<endl;
        }
        cin>>opc;
        if(opc <= 0 or opc > 10){

            while(bandera2 == 0){
                cout<<"opcion no valida, digite una de las especies disponibles"<<endl;
                cin>>opc;
                if(opc > 0 and opc <= 10){
                    bandera2 = 1;
                }

            }
        }else{
            especie = artico[opc];
        }


    }

    else if(habitats[opc-1].getNombre() == "acuatico"){
        for(int i = 1; i < 11; i++){
            cout<<"["<<i<<"] "<<acuatico[i]<<endl;
        }
        cin>>opc;
        if(opc <= 0 or opc > 10){

            while(bandera2 == 0){
                cout<<"opcion no valida, digite una de las especies disponibles"<<endl;
                cin>>opc;
                if(opc > 0 and opc <= 10){
                    bandera2 = 1;
                }

            }
        }else{
            especie = acuatico[opc];
        }

    }

    string alimento[3] = {"carnivoro","herbivoro","omnivoro"};

    cout<<"[1] carnivoro"<< endl;
    cout<<"[2] herbivoro"<<endl;
    cout<<"[3] omnivoros"<<endl;
    cout<<"alimentacion de " << nombre << endl;

    cin>>opc;
    alimentacion = alimento[opc-1];

    cout<<"edad de "<<nombre<<endl;
    cin>>edad;




    int i = 0;
    int bandera = 0;

    /*agrega el animal al habitat*/
    while(bandera == 0 and i < habitats.size()){
        if(habitats[i].getNombre() == grupo){
            animal animal1(id,nombre,especie,alimentacion,edad);
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
            cout<<"["<<habitats[i].getId()<<"] HABITAT: "<<habitats[i].getNombre()<< endl;
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
    int num;

    cout<<"id del habitat: "<< endl;
    cin >> num;

    int i = 0;
    int bandera = 0;
    while(bandera == 0 and i < habitats.size()){
        if(habitats[i].getId() == num){
            habitats.erase(habitats.begin()+i);
            bandera = 1;
        }else{
            i = i + 1;
        }
    }

    if(bandera == 0){
        cout << "no se encontro el habitat con id " << num << endl;
    }




}

void eliminarAnimal(){
    int num;

    cout<<"id del animal: "<< endl;
    cin>>num;

    int bandera = 0;
    for(int i = 0; i < habitats.size(); i++){
        for(int j = 0; j < habitats[j].animales.size();j++){
            cout<<habitats[i].animales[j].getId()<<endl;
            if(habitats[i].animales[j].getId() == num){
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
    if(bandera == 0){
        cout<<"no se encontro el animal con el id "<<num<<endl;
    }


}

void accion(){
    int num;

    cout<<"id del animal: "<< endl;
    cin>>num;

    int bandera = 0;
    for(int i = 0; i < habitats.size(); i++){
        for(int j = 0; j < habitats[j].animales.size();j++){
            if(habitats[i].animales[j].getId() == num){
                if(habitats[i].getNombre() == "selvatico"){
                    cout<<"el "<<habitats[i].animales[j].getEspecie()<<" "<<habitats[i].animales[j].getNombre()<< " corre";
                }else if(habitats[i].getNombre() == "desertico"){
                    cout<<"el "<<habitats[i].animales[j].getEspecie()<< habitats[i].animales[j].getNombre()<< " se esconde";
                }else if(habitats[i].getNombre() == "artico"){
                    cout<<"el "<<habitats[i].animales[j].getEspecie()<< habitats[i].animales[j].getNombre()<< " esquia en la nieve";
                }else if(habitats[i].getNombre() == "acuatico"){
                    cout<<"el "<<habitats[i].animales[j].getEspecie()<< habitats[i].animales[j].getNombre()<< " nada en el estanque";
                }
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
    if(bandera == 0){
        cout<<"no se encontro el animal con el id "<<num<<endl;
    }

}

int main() {

    int opc = -1;
    int id = 1;
    int id2 = 1;

    while(opc != 0){

        cout<<"   Zoologico" << endl;
        cout<<"[1] agregar un habitat" << endl;
        cout<<"[2] agregar un animal" << endl;
        cout<<"[3] visualizar info habitat" << endl;
        cout<<"[4] eliminar un habitat" << endl;
        cout<<"[5] eliminar un animal" << endl;
        cout<<"[6] accion "<< endl;
        cout<<"[0] salir"<<endl;
        cin>>opc;

        switch (opc) {
            case 1:
                agregarHabitat(id2);
                id2 = id2 + 1;
                cout<<""<<endl;
                break;
            case 2:
                if(habitats.size() == 0){
                    cout<<"en este momento no hay ningun habitat, agregue uno"<<endl;
                }else{
                    agregarAnimal(id);
                    id = id + 1;
                    cout<<""<<endl;
                }

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
            case 6:
                accion();
                cout<<""<<endl;

        }
    }




    return 0;
}
