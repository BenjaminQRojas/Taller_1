#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

//clase seguridad con malware como atributo unico de la clase
class Security : public Software
{
    private:
        string malware;//tipo de malware que trata
    public:
        Security(string name, string developer, int ageRating, int price, string malware);
        ~Security();
        string getMalware();
        void setMalware(string malware);

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

Security::Security(string name, string developer, int ageRating, int price, string malware):Software(name, developer, ageRating, price)
{
    this -> malware = malware;
};

Security::~Security(){};

string Security::getMalware()
{
    return this -> malware;
}

void Security::setMalware(string malware)
{
    this -> malware = malware;
}

//Implementaciones de los métodos virtuales puros heredados de Software
string Security::getName()
{
    return this -> name;
}
string Security::getDeveloper()
{
    return this -> developer;
}
int Security::getAgeRating()
{
    return this -> ageRating;
}
int Security::getPrice()
{
    return this -> price;
}
void Security::setName(string name)
{
    this -> name = name;
}
void Security::setDeveloper(string developer)
{
    this -> developer = developer;
}
void Security::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void Security::setPrice(int price)
{
    this -> price = price;
}