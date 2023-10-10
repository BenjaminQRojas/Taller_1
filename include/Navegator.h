#pragma once
#include <iostream>
#include <vector>
#include "Software.h"
using namespace std;

//clase navegador con history como atributo unico de la clase
class Navegator : public Software
{
    private:
        vector<string> history;//vector de string que simula una lista con cada pagina visitada
    public:
        Navegator(string name, string developer, int ageRating, int price);
        ~Navegator();
        string getHistory();
        void addPageToHistory(string page);

        //Implementación de los métodos virtuales puros de la clase base
        string getName() override;
        string getDeveloper() override;
        int getAgeRating() override;
        int getPrice() override;
        void setName(string name) override;
        void setDeveloper(string developer) override;
        void setAgeRating(int ageRating) override;
        void setPrice(int price) override;
};

Navegator::Navegator(string name, string developer, int ageRating, int price):Software(name, developer, ageRating, price){};

Navegator::~Navegator(){};

//obtiene un string con cada pagina visitada
string Navegator::getHistory()
{
    string historyOut;
    for (string page : history)
    {
        historyOut += page + "\n";
    }
    return historyOut;
}

//agrega una pagina al historial
void Navegator::addPageToHistory(string page)
{
    history.push_back(page);
}

//Implementaciones de los métodos virtuales puros heredados de Software
string Navegator::getName()
{
    return this -> name;
}
string Navegator::getDeveloper()
{
    return this -> developer;
}
int Navegator::getAgeRating()
{
    return this -> ageRating;
}
int Navegator::getPrice()
{
    return this -> price;
}
void Navegator::setName(string name)
{
    this -> name = name;
}
void Navegator::setDeveloper(string developer)
{
    this -> developer = developer;
}
void Navegator::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void Navegator::setPrice(int price)
{
    this -> price = price;
}