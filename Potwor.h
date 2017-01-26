//
// Created by Krzysiek on 23.01.17.
//
#include "libraries.h"
#ifndef GAME_POTWOR_H
#define GAME_POTWOR_H


class Potwor {
private:
    SDL_Surface *potwor;
    int x,y, obszar_lewo, obszar_prawo;
    int kierunek;
    bool zyje;

public:
    Potwor(int xp, int yp, int o_lewo, int o_prawo);
    bool czy_trafil(int x_pocisku, int y_pocisku);
    void gin();
    void akcja();
    void pokaz();
    bool czy_dopadl(int x_gracza,int y_gracza);
    bool czy_zyje();

};


#endif //GAME_POTWOR_H
