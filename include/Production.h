#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

//clase produccion con solution como atributo unico de la clase
class Production : public Software
{
    private:
        string solution;//tipo de solucion que da el software
    public:
        Production(string name, string developer, int ageRating, int price, string solution);
        ~Production();
        string getSolution();
        void setSolution(string solution);

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

Production::Production(string name, string developer, int ageRating, int price, string solution):Software(name, developer, ageRating, price)
{
    this -> solution = solution;
};

Production::~Production(){};

string Production::getSolution()
{
    return this -> solution;
}

void Production::setSolution(string solution)
{
    this -> solution = solution;
}

//Implementaciones de los métodos virtuales puros heredados de Software
string Production::getName()
{
    return this -> name;
}
string Production::getDeveloper()
{
    return this -> developer;
}
int Production::getAgeRating()
{
    return this -> ageRating;
}
int Production::getPrice()
{
    return this -> price;
}
void Production::setName(string name)
{
    this -> name = name;
}
void Production::setDeveloper(string developer)
{
    this -> developer = developer;
}
void Production::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void Production::setPrice(int price)
{
    this -> price = price;
}