#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

//clase ofimatica con programas creados como atributo unico de la clase
class OfficeAutomation : public Software
{
    private:
        int programsCreated;//programas creados por el software de ofimatica
    public:
        OfficeAutomation(string name, string developer, int ageRating, int price);
        ~OfficeAutomation();
        int getProgramsCreated();
        void addProgram();
        void deleteProgram();

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

OfficeAutomation::OfficeAutomation(string name, string developer, int ageRating, int price):Software(name, developer, ageRating, price)
{
    this -> programsCreated = 0;
};

OfficeAutomation::~OfficeAutomation(){};

int OfficeAutomation::getProgramsCreated()
{
    return this -> programsCreated;
}

//añade un programa creado con el software (i++)
void OfficeAutomation::addProgram()
{
    this -> programsCreated = programsCreated+1;
}

//elimina un programa creado con el software (i--)
void OfficeAutomation::deleteProgram()
{
    this -> programsCreated = programsCreated-1;
}

//Implementaciones de los métodos virtuales puros heredados de Software
string OfficeAutomation::getName()
{
    return this -> name;
}
string OfficeAutomation::getDeveloper()
{
    return this -> developer;
}
int OfficeAutomation::getAgeRating()
{
    return this -> ageRating;
}
int OfficeAutomation::getPrice()
{
    return this -> price;
}
void OfficeAutomation::setName(string name)
{
    this -> name = name;
}
void OfficeAutomation::setDeveloper(string developer)
{
    this -> developer = developer;
}
void OfficeAutomation::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void OfficeAutomation::setPrice(int price)
{
    this -> price = price;
}