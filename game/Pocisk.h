//
// Created by Krzysiek on 23.01.17.
//
#include "libraries.h"
#ifndef GAME_POCISK_H
#define GAME_POCISK_H


class Pocisk{
private:
    int x,y;
    int kierunek;
    bool istnieje;

public:
    Pocisk();
    Pocisk(int xp, int yp, int kierunekp);
    void zniszcz();
    int pozycja_x();
    int pozycja_y();
    void akcja();
    void pokaz();
    bool czy_istnieje();
};


#endif //GAME_POCISK_H
