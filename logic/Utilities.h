#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

//funcion que castea un string a int y retorna el int
int castInt(string number)
{
    int i = std::atoi(number.c_str());
    return i;//retorna el int casteado
}

//funcion que corta una linea dada y retorna un vector
vector<string> stringSplitter(string line)
{
    char character = ',';//caracter que indicara el "punto" a cortar
    vector<string> words{};
    stringstream sstream(line);
    string word;
    while (std::getline(sstream, word, character)){
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
        words.push_back(word);//agrega las palabras cortadas al vector
    }
    return words;//retorna el vector
}