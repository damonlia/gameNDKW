//
// Created by lili on 22.01.17.
//
#include "libraries.h"
#include "Potwor.h"
#ifndef GAME_LVL_H
#define GAME_LVL_H

using namespace std;
class LVL {
private:
    //Dane stale:
    int plansza[255][17];
    string nazwa_poziomu;

    Potwor *potwory[5];
    int ile_potworow;

    //Dane, pobierane z pliku:
    int numer;
    string nazwa;
    int zycia;
    int szerokosc;

    SDL_Surface *trawa;
    SDL_Surface *platforma;
    SDL_Surface *woda;
    SDL_Surface *gwiazdka;
    SDL_Surface *kolce;
    SDL_Surface *klucz;
    SDL_Surface *koniec;

    SDL_Surface *sky;
    SDL_Surface *far;
    SDL_Surface *middle;

    SDL_Surface *tlo_mapy;

public:
    LVL(string nazwa="LVL1");
    void ladowanie();
    int jaki_numer();
    string jaka_nazwa();
    int jaki_obiekt(int x, int y);
    void pokaz();
    int wez(int x, int y);


};


#endif //GAME_LVL_H
