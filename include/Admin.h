#pragma once
#include <iostream>
#include "Human.h"
using namespace std;

class Admin : public Human
{
    private:
        string email;
        bool log;
    public:
        Admin(string name, string password, int age, string email, bool log);
        ~Admin();
        string getEmail();
        bool getLog();
        void setEmail(string email);
        void setLog(bool log);

        //Implementación de los métodos virtuales puros de la clase base
        string getName() override;
        string getPassword() override;
        int getAge() override;
        void setName(string name) override;
        void setPassword(string password) override;
        void setAge(int age) override;
};

Admin::Admin(string name, string password, int age, string email, bool log):Human(name, password, age)
{
    this-> email = email;
    this-> log = log;
};

Admin::~Admin(){};

string Admin::getEmail()
{
    return this -> email;
}

bool Admin::getLog()
{
    return this -> log;
}

void Admin::setEmail(string email)
{
    this -> email = email;
}

void Admin::setLog(bool log)
{
    this -> log = log;
}

//Implementaciones de los métodos virtuales puros heredados de Human
string Admin::getName()
{
    return this->name;
}

string Admin::getPassword()
{
    return this->password;
}

int Admin::getAge()
{
    return this->age;
}

void Admin::setName(string name)
{
    this->name = name;
}

void Admin::setPassword(string password)
{
    this->password = password;
}

void Admin::setAge(int age)
{
    this->age = age;
}