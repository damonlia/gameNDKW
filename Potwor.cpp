//
// Created by Krzysiek on 23.01.17.
//
#include "libraries.h"
#include "Funkcje.h"
#include "Potwor.h"


Potwor::Potwor(int xp, int yp, int o_lewo, int o_prawo)
{
    zyje=true;
    x=xp;
    y=yp;
    obszar_prawo=o_prawo;
    obszar_lewo=o_lewo;
    potwor=laduj_obraz("Dane/potwor.bmp");
    kierunek=PRAWO;
}

bool Potwor::czy_trafil(int x_pocisku, int y_pocisku)
{
    if(zyje)
    {
        if((x_pocisku>x)&&(x_pocisku<x+32)&&(y_pocisku>y)&&(y_pocisku<y+32))
            return true;
        return false;
    }
    else
        return false;
}

void Potwor::gin() {
    zyje=false;
}

void Potwor::pokaz()
{
    if(zyje)
    {
        wyswietl(x-SCROLL,y,potwor,ekran);
    }
}

void Potwor::akcja() {
    if(kierunek==PRAWO)
        x++;
    else
        x--;

    if(x>=obszar_prawo)
        kierunek=LEWO;

    if(x<obszar_lewo)
        kierunek=PRAWO;

  if(stargun.czy_istnieje())
        if(czy_trafil(stargun.pozycja_x(),stargun.pozycja_y())){
            gin();
            stargun.ukryjPocisk();
        }
}


bool Potwor::czy_dopadl(int x_gracza, int y_gracza)
{
    if(zyje)
    {
        /*if((x_gracza+32>x)&&(x_gracza<x+32)&&(y_gracza+64>y)&&(y_gracza<y+32))
            return true;
        return false;*/
        if((x_gracza>x)&&(x_gracza<x+32)&&(y_gracza>y)&&(y_gracza<y+32))
            return true;
        return false;
    }
    else{
        return false;
    }

}

bool Potwor::czy_zyje() {
    return zyje;
}
