#pragma once
#include <iostream>
#include <vector>
using namespace std;

//clase base para los usuarios
class Human
{
    protected:
        string name;
        string password;
        int age;
    public:
        Human(string name, string password, int age);
        //metodos virtuales
        virtual ~Human();
        virtual string getName() = 0;
        virtual string getPassword() = 0;
        virtual int getAge() = 0;
        virtual void setName(string name) = 0;
        virtual void setPassword(string password) = 0;
        virtual void setAge(int age) = 0;
};

Human::Human(string name, string password, int age)
{
    this -> name = name; 
    this -> password = password;
    this -> age = age;
};

Human::~Human(){};