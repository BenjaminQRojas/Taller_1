#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

//clase juegos con genre como atributo unico de la clase
class Game : public Software
{
    private: 
        string genre;
    public:
        Game(string name, string developer, int ageRating, int price, string genre);
        ~Game();
        string getGenre();
        void setGenre(string genre);

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

Game::Game(string name, string developer, int ageRating, int price, string genre):Software(name, developer, ageRating, price)
{
    this -> genre = genre;
};

Game::~Game(){};

string Game::getGenre()
{
    return this -> genre;
}

void Game::setGenre(string genre)
{
    this -> genre = genre;
}

//Implementaciones de los métodos virtuales puros heredados de Software
string Game::getName()
{
    return this -> name;
}
string Game::getDeveloper()
{
    return this -> developer;
}
int Game::getAgeRating()
{
    return this -> ageRating;
}
int Game::getPrice()
{
    return this -> price;
}
void Game::setName(string name)
{
    this -> name = name;
}
void Game::setDeveloper(string developer)
{
    this -> developer = developer;
}
void Game::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void Game::setPrice(int price)
{
    this -> price = price;
}