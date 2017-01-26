//
// Created by lili on 22.01.17.
//

#include "libraries.h"
#ifndef GAME_POSTAC_H
#define GAME_POSTAC_H


class Postac {
private:
    SDL_Surface *neutralna;
//SDL_Surface *klatka[3];
    Uint32 kluczKoloru;
    int x,y;
    int sklatka;
    int ile_skokow;
    int kierunek; //Nowe

public:
    Postac();
    int pokaz();
    int akcja(Uint8 *klawisze);
    int polozenie();
    int ruch(int kierunek, int ile);
};


#endif //GAME_POSTACC_H
