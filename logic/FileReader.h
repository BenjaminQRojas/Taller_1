#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "include/include.h"
#include "Utilities.h"
using namespace std;

// Función para escribir una línea en el archivo README
void writeToReadme(const string& line) {
    const char* filePath = "README.txt";
    ofstream file_readme(filePath, ios_base::app);  // Abre el archivo en modo de apertura para añadir (append)

    if (file_readme.is_open()) {
        file_readme << line << "\n";  // Escribe la línea en el archivo
        file_readme.close();  // Cierra el archivo
    } else {
        cerr << "Error al abrir el archivo README" << endl;
    }
}

//funcion para leer el archivo Users.txt, crear objetos y guardarlos en las listas
void readFileUsers(vector<Admin>& adminVector,vector<User>& userVector,vector<Kid>& kidVector)
{
    string line;
    ifstream userFile("Users.txt");
    if(userFile.fail()){
        cout<<"Texto entrada Estructura.txt no existe"<<endl;
    }else{
        while(!userFile.eof()){
            getline(userFile,line); //con esta funcion tomas la linea(limitada por \n)
            vector<string> lineSplitted = stringSplitter(line);//corta la linea
            string name, password, age, type;
            name = lineSplitted[0];
            password = lineSplitted[1];
            age = lineSplitted[2];
            type = lineSplitted[3];
            if(type == "admin"){//filtra segun tipo de usuario
                string email = lineSplitted[4];
                string log = lineSplitted[5];
                if(log == "true"){//fitra segun el log del admin
                    Admin admin(name, password, castInt(age), email, true);
                    writeToReadme(line);//lo escribe al readme
                    adminVector.push_back(admin);//guarda al usuario en la lista
                }else{
                    Admin admin(name, password, castInt(age), email, false);
                    writeToReadme(line);//lo escribe al readme
                    adminVector.push_back(admin);//guarda al usuario en la lista
                }
            }else if(type == "user"){//filtra segun tipo de usuario
                string email = lineSplitted[4];
                User user(name, password, castInt(age), email);
                writeToReadme(line);//lo escribe al readme
                userVector.push_back(user);//guarda al usuario en la lista
            }else if(type == "kid"){//filtra segun tipo de usuario
                Kid kid(name, password, castInt(age));
                writeToReadme(line);//lo escribe al readme
                kidVector.push_back(kid);//guarda al usuario en la lista
            }else{
                cout<<"linea con error"<<endl;
            }
        }
    }
}

//funcion para leer el archivo Softwares.txt, crear objetos y guardarlos en las listas
void readFileSoftwares(vector<Game>& gameVector, vector<Social>& socialVector, vector<Production>& productionVector, vector<Security>& securityVector, vector<OfficeAutomation>& officeAutomationVector, vector<Navegator>& navegatorVector)
{
    string line;
    ifstream softwareFile("Softwares.txt");
    if(softwareFile.fail()){
        cout<<"Texto entrada Estructura.txt no existe"<<endl;
    }else{
        while(!softwareFile.eof()){
            getline(softwareFile,line); //con esta funcion tomas la linea(limitada por \n)
            vector<string> lineSplitted = stringSplitter(line);//corta la linea obtenida
            string name, developer, ageRating, price, type;
            name = lineSplitted[0];
            developer = lineSplitted[1];
            ageRating = lineSplitted[2];
            price = lineSplitted[3];
            type = lineSplitted[4];
            if(type == "game"){//filtra segun tipo de software
                string genre = lineSplitted[5];
                Game game(name, developer, castInt(ageRating), castInt(price), genre);
                writeToReadme(line);//lo escribe al readme
                gameVector.push_back(game);//añade el software a la lista
            }else if(type == "social"){//filtra segun tipo de software
                Social social(name, developer, castInt(ageRating), castInt(price),type);
                writeToReadme(line);//lo escribe al readme
                socialVector.push_back(social);//añade el software a la lista
            }else if(type == "security"){//filtra segun tipo de software
                string malware = lineSplitted[5];
                Security security(name, developer, castInt(ageRating), castInt(price), malware);
                writeToReadme(line);//lo escribe al readme
                securityVector.push_back(security);//añade el software a la lista
            }else if(type == "officeautomation"){//filtra segun tipo de software
                OfficeAutomation officeAutomation(name, developer, castInt(ageRating), castInt(price));
                writeToReadme(line);//lo escribe al readme
                officeAutomationVector.push_back(officeAutomation);//añade el software a la lista
            }else if(type == "production"){//filtra segun tipo de software
                string solution = lineSplitted[5];
                Production production(name, developer, castInt(ageRating), castInt(price), solution);
                writeToReadme(line);//lo escribe al readme
                productionVector.push_back(production);//añade el software a la lista
            }else if(type == "navegator"){//filtra segun tipo de software
                Navegator navegator(name, developer, castInt(ageRating), castInt(price));
                writeToReadme(line);//lo escribe al readme
                navegatorVector.push_back(navegator);//añade el software a la lista
            }else{
                cout<<"linea con error"<<endl;
            }
        }
    }
}