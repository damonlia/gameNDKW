//
// Created by lili on 22.01.17.
//
#include "libraries.h"
#include "Funkcje.h"
#include "Postac.h"



const int GORA = 2;
const int DOL = 3;


Postac::Postac() {
    neutralna=laduj_obraz("Dane/kapitan.bmp");
    x=10;
    y=450;
    sklatka=0;
    ile_skokow=0;
    kierunek = PRAWO; //Nowe
    kluczKoloru = SDL_MapRGB(neutralna->format,0xFF,0x00,0xFF);
}

int Postac::pokaz() {
    wyswietl(x-SCROLL,y,neutralna,ekran);

    //Minimapa:
    int xp = x/32;
    int yp = y/32 +1;
    put_pixel32(ekran, xp*3, yp*3, 0x00ff00);
    put_pixel32(ekran, xp*3+1, yp*3, 0x00ff00);
    put_pixel32(ekran, xp*3, yp*3+1, 0x00ff00);
    put_pixel32(ekran, xp*3+1, yp*3+1, 0x00ff00);
    put_pixel32(ekran, xp*3, yp*3+2, 0x00ff00);
    put_pixel32(ekran, xp*3+1, yp*3+2, 0x00ff00);
}

int Postac::akcja( Uint8 *klawisze) {

    if(klawisze[SDLK_UP]) {
        if(sklatka==0 && ile_skokow<2) {
            sklatka=26;
            ile_skokow++;
            ruch(GORA,4);
        }
    }
    //if(klawisze[SDLK_DOWN])

    if(klawisze[SDLK_LEFT]) {
        if(kierunek==PRAWO)
            neutralna=odwroc(neutralna,POZIOMO);
        ruch(LEWO,2);
        kierunek=LEWO;
  SDL_SetColorKey(neutralna, SDL_SRCCOLORKEY, kluczKoloru);
    }

    if(klawisze[SDLK_RIGHT]) {
        if(kierunek==LEWO)
            neutralna=odwroc(neutralna,POZIOMO);
        ruch(PRAWO,2);
        kierunek=PRAWO;
  SDL_SetColorKey(neutralna, SDL_SRCCOLORKEY, kluczKoloru);
    }

    if(klawisze[SDLK_SPACE] && ! stargun.czy_istnieje()) {
        if(GWIAZDKI>0)
        {
            GWIAZDKI--;
            stargun = Pocisk(x+32,y+40,kierunek);
        }
        else
            nowy_komunikat("Brak gwiazdek!", 60);
    }

    if(x>=PLANSZA_SZEROKOSC*32-32)
        x=PLANSZA_SZEROKOSC*32-32;

    if(x<=0)
        x=0;


    if(sklatka!=0)
    {
        sklatka--;
        ruch(GORA, 3);
    }

    // bezwladnosc
    ruch(DOL,1);

    if(Level.wez(x-6,y))
        return true;
    if(Level.wez(x+38,y))
        return true;
    if(Level.wez(x-6,y+36))
        return true;
    if(Level.wez(x+38,y+36))
        return true;
    if(Level.wez(x+16,y-10))
        return true;
    if(Level.wez(x+16,y+71))
        return true;

    return false;
}

int Postac::polozenie() {
    return x;
}


int Postac::ruch(int kierunek, int ile) {

    if(kierunek==PRAWO) {
        if((Level.jaki_obiekt(x+32+ile,y+5)==NIC)&&(Level.jaki_obiekt(x+32+ile,y+60)==NIC))
            x+=ile;
        if(Level.jaki_obiekt(x+32+ile,y+60)==KOLCE)
        {
            Level.wez(x,y);
            ruch(LEWO,10);
        }
    }

    if(kierunek==LEWO) {
        if((Level.jaki_obiekt(x-ile,y+5)==NIC)&&(Level.jaki_obiekt(x-ile,y+60)==NIC))
            x-=ile;
        if(Level.jaki_obiekt(x-ile,y+60)==KOLCE)
        {
            Level.wez(x,y);
            ruch(PRAWO,10);
        }
    }

    if(kierunek==GORA) {
        if((Level.jaki_obiekt(x,y-ile)==NIC)&&(Level.jaki_obiekt(x+32,y-ile)==NIC))
            y-=ile;
    }

    if(kierunek==DOL) {
        if((Level.jaki_obiekt(x,y+64+ile)==NIC)&&(Level.jaki_obiekt(x+32,y+64+ile)==NIC))
            y+=ile;
        else
            ile_skokow=0;
        if((Level.jaki_obiekt(x,y+64+ile)==KOLCE)||(Level.jaki_obiekt(x+33,y+64+ile)==KOLCE)) {
            Level.wez(x,y);
            ruch(GORA,50);
        }
        if((Level.jaki_obiekt(x,y+64+ile)==WODA)||(Level.jaki_obiekt(x+33,y+64+ile)==WODA)) {
            ZYCIA--;
            x=10;
            y=450;
        }
    }
}
