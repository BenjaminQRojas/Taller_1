#pragma once
#include <iostream>
#include "include/include.h"
using namespace std;

//funcion para iniciar sesion
vector<string> login(vector<Admin>& adminVector,vector<User>& userVector,vector<Kid>& kidVector){
    string name, password;
    cout << "Nombre: ";
    cin >> name;
    cout << "Contraseña: ";
    cin >> password;
    while (true) {
        //busca al usuario en la lista adminVector
        auto adminIt = find_if(adminVector.begin(), adminVector.end(), [name, password](Admin& admin) {
            return admin.getName() == name && admin.getPassword() == password;
        });
        //busca al usuario en la lista userVector
        auto userIt = find_if(userVector.begin(), userVector.end(), [name, password](User& user) {
            return user.getName() == name && user.getPassword() == password;
        });
        //busca al usuario en la lista kidVector
        auto kidIt = find_if(kidVector.begin(), kidVector.end(), [name, password](Kid& kid) {
            return kid.getName() == name && kid.getPassword() == password;
        });

        if (adminIt != adminVector.end()) {
            // Usuario encontrado en adminVector
            vector<string> out;
            out.push_back(name);
            out.push_back("admin");
            return out;//retorna vector con datos del usuario
        } else if (userIt != userVector.end()) {
            // Usuario encontrado en userVector
            vector<string> out;
            out.push_back(name);
            out.push_back("user");
            return out;//retorna vector con datos del usuario
        } else if (kidIt != kidVector.end()) {
            // Usuario encontrado en kidVector
            vector<string> out;
            out.push_back(name);
            out.push_back("kid");
            return out;//retorna vector con datos del usuario
        } else {
            cout << "Usuario no encontrado. Por favor, ingrese los valores nuevamente." << endl;
            cout << "Nombre: ";
            cin >> name;
            cout << "Contraseña: ";
            cin >> password;
        }
    }
}

//funcion que muestra el menu despues de iniciar sesion
void sub_menu(vector<string> userOn){

}

//funcion que muestra el primer menu para iniciar sesion 
void show_menu(vector<Admin>& adminVector,vector<User>& userVector,vector<Kid>& kidVector) {
    vector<string> userOn;
    int opcion;
    while (true) {
        cout << "TALLER 1" << endl;
        cout << "Opción (1): Iniciar sesión" << endl;
        cout << "Opción (2): Salir" << endl;

        if (!(cin >> opcion)) {
            // Si la entrada no es válida, limpiar el estado de error de cin y descartar la entrada incorrecta
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ingrese una opción válida" << std::endl;
            continue; // Volver al inicio del bucle
        }

        switch (opcion) {
            case 1:
                userOn = login(adminVector,userVector,kidVector);
                break;
            case 2:
                std::cout << "PROGRAMA TERMINADO" << std::endl;
                return;  // Rompe el bucle while y sale de la función
            default:
                std::cout << "Ingrese una opción válida" << std::endl;
                break;
        }
    }
}