#pragma once
#include <iostream>
#include "Human.h"
using namespace std;

class User : public Human
{
    private:
        string email;
    public:
        User(string name, string password, int age, string email);
        ~User();
        string getEmail();
        void setEmail(string email);

        //Implementación de los métodos virtuales puros de la clase base
        string getName() override;
        string getPassword() override;
        int getAge() override;
        void setName(string name) override;
        void setPassword(string password) override;
        void setAge(int age) override;
};

User::User(string name, string password, int age, string email) : Human(name, password, age)
{
    this->email = email;
};

User::~User(){};

string User::getEmail()
{
    return this->email;
}

void User::setEmail(string email)
{
    this -> email = email;
}

//Implementaciones de los métodos virtuales puros heredados de Human
string User::getName()
{
    return this->name;
}

string User::getPassword()
{
    return this->password;
}

int User::getAge()
{
    return this->age;
}

void User::setName(string name)
{
    this->name = name;
}

void User::setPassword(string password)
{
    this->password = password;
}

void User::setAge(int age)
{
    this->age = age;
}
