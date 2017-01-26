//
// Created by lili on 22.01.17.
//
#include "libraries.h"
#include "Pocisk.h"
#include "LVL.h"

     const int LEWO = 1;
     const int PRAWO = 0;

     const int PIONOWO = 1;
     const int POZIOMO = 2;

    extern Uint32 kluczKoloru;
    extern SDL_Color kolortekstu;
    extern TTF_Font *czcionka;
     const int EKRAN_SZEROKOSC = 800; //x*100
     const int EKRAN_WYSOKOSC = 600; //y*96 (800
     const int EKRAN_GLEBIA = 32;
    extern SDL_Surface *ekran;

    extern SDL_Surface *menu;
    extern SDL_Surface *pzycia;
    extern SDL_Surface *pklucze;
    extern SDL_Surface *pgwiazdki;
    extern int PLANSZA_SZEROKOSC;
    extern int ZYCIA;
    extern int SCROLL;

      const int NIC = 0;
      const int TRAWA = 1;
      const int PLATFORMA = 2;
      const int WODA = 3;
      const int GWIAZDKA = 4;
      const int KOLCE = 5;
      const int POTWOR = 6;
      const int KLUCZ = 7;
      const int KONIEC = 8;

    extern   int KLUCZE;
    extern   int GWIAZDKI;


    extern  Pocisk stargun;
    extern  LVL Level;

    SDL_Surface *laduj_obraz(std::string nazwa_pliku );
    void wyswietl(int x, int y, SDL_Surface *zrodlo, SDL_Surface *cel);
    Uint32 get_pixel32(SDL_Surface *powierzchnia, int x, int y);
    void put_pixel32(SDL_Surface *powierzchnia, int x, int y, Uint32 piksel);
    SDL_Surface *odwroc(SDL_Surface *powierzchnia, int flagi);
    int inicjalizuj();
    int laduj_pliki();
    void posprzataj();
    void nowy_komunikat(std::string co, int ile_czasu);
    void komunikat_wyswietl() ;




