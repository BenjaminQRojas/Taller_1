#pragma once
#include <iostream>
#include <vector>
#include "Admin.h"
#include "User.h"
#include "Kid.h"
#include "Software.h"
using namespace std;

//clase social con vectores de niños y usuarios y tipo de usuario como atributo unico de la clase
class Social : public Software
{
    private:
        string typeUser;//para diferenciar al usuario
        vector<Kid> kidVector;
        vector<User> userVector;
    public:
        Social(string name, string developer, int ageRating, int price, string typeUser);
        ~Social();
        string getTypeUser();
        void addFriendUser(User user);
        void addFriendKid(Kid kid);
        void deleteFriend(string name);
        string showFriends();
        
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

Social::Social(string name, string developer, int ageRating, int price, string typeUser):Software(name, developer, ageRating, price)
{
    this -> typeUser = typeUser;
};

Social::~Social(){};

string Social::getTypeUser()
{
    return this -> typeUser;
}

//agrega un amigo a un usuario del tipo user
void Social::addFriendUser(User user)
{
    this -> userVector.push_back(user);
}
//agrega un amigo a un usuario del tipo kid
void Social::addFriendKid(Kid kid)
{
    this -> kidVector.push_back(kid);
}

//elimina un amigo por el nombre
void Social::deleteFriend(string name)
{
    if(this->typeUser == "User"){//filtra segun el tipo
        for (auto it = userVector.begin(); it != userVector.end(); ++it)
        {
            if (it->getName() == name)
            {
                userVector.erase(it);//lo borra
                return;//termina el ciclo
            }
        }
    }else{//filtra segun el tipo
        for (auto it = kidVector.begin(); it != kidVector.end(); ++it)
        {
            if (it->getName() == name)
            {
                kidVector.erase(it);//lo borra
                return;//termina el ciclo
            }
        }
    }
}

//muestra todos los amigos de un usuario
string Social::showFriends()
{
    string friendsList = "Lista de amigos:\n";
    if(this->typeUser == "User"){//filtra segun tipo de usuario
        for (User& user : userVector)
        {
            friendsList += user.getName() + "\n";//agrega los datos al string a devolver
        }
        return friendsList;
    }else{//filtra segun tipo de usuario
        for (Kid& kid : kidVector)
        {
            friendsList += kid.getName() + "\n";//agrega los datos al string a devolver
        }
        return friendsList;
    }
}

//Implementaciones de los métodos virtuales puros heredados de Software
string Social::getName()
{
    return this -> name;
}
string Social::getDeveloper()
{
    return this -> developer;
}
int Social::getAgeRating()
{
    return this -> ageRating;
}
int Social::getPrice()
{
    return this -> price;
}
void Social::setName(string name)
{
    this -> name = name;
}
void Social::setDeveloper(string developer)
{
    this -> developer = developer;
}
void Social::setAgeRating(int ageRating)
{
    this -> ageRating = ageRating;
}
void Social::setPrice(int price)
{
    this -> price = price;
}