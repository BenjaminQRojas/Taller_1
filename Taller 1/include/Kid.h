#pragma once
#include <iostream>
#include "Human.h"
using namespace std;

class Kid : public Human
{
    private:
        //biblioteca
    public:
        Kid(string name, string password, int age);
        ~Kid();
        //get y set biblioteca
        
        //Implementación de los métodos virtuales puros de la clase base
        string getName() override;
        string getPassword() override;
        int getAge() override;
        void setName(string name) override;
        void setPassword(string password) override;
        void setAge(int age) override;
};

Kid::Kid(string name, string password, int age):Human(name, password, age){};

Kid::~Kid(){};

//Implementaciones de los métodos virtuales puros heredados de Human
string Kid::getName()
{
    return this->name;
}

string Kid::getPassword()
{
    return this->password;
}

int Kid::getAge()
{
    return this->age;
}

void Kid::setName(string name)
{
    this->name = name;
}

void Kid::setPassword(string password)
{
    this->password = password;
}

void Kid::setAge(int age)
{
    this->age = age;
}