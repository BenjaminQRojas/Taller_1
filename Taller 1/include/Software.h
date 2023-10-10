#pragma once
#include <iostream>
using namespace std;

//clase base para los softwares
class Software
{
    protected:
        string name;
        string developer;
        int ageRating;
        int price;
    public:
        Software(string name, string developer, int ageRating, int price);
        //metodos virtuales
        virtual ~Software();
        virtual string getName() = 0;
        virtual string getDeveloper() = 0;
        virtual int getAgeRating() = 0; 
        virtual int getPrice() = 0; 
        virtual void setName(string name) = 0;
        virtual void setDeveloper(string developer) = 0;
        virtual void setAgeRating(int ageRating) = 0;
        virtual void setPrice(int price) = 0;
};

Software::Software(string name, string developer, int ageRating, int price)
{
    this -> name = name;
    this -> developer = developer; 
    this -> ageRating = ageRating;
    this -> price = price;
};

Software::~Software(){};