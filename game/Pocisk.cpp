//
// Created by Krzysiek on 23.01.17.
//
#include "libraries.h"
#include "Funkcje.h"


Pocisk::Pocisk() {
    istnieje=false;
}


Pocisk::Pocisk(int xp, int yp, int kierunekp) {
    x = xp;
    y = yp;
    kierunek = kierunekp;
    istnieje = true;
}


void Pocisk::zniszcz() {
    istnieje = false;
}


int Pocisk::pozycja_x() {
    return x;
}


int Pocisk::pozycja_y() {
    return y;
}


void Pocisk::akcja() {
    if(kierunek==PRAWO)
        x+=3;
    else
        x-=3;
    if(x-SCROLL>EKRAN_SZEROKOSC)
        zniszcz();
    if(x-SCROLL<0)
        zniszcz();
}


void Pocisk::pokaz() {
    int xp = x - SCROLL;
    put_pixel32(ekran, xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
    put_pixel32(ekran, ++xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
    put_pixel32(ekran, ++xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
    put_pixel32(ekran, ++xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
    put_pixel32(ekran, ++xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
    put_pixel32(ekran, ++xp, y, 0xffff44);
    put_pixel32(ekran, xp, y+1, 0xffff44);
}


bool Pocisk::czy_istnieje() {
    if(istnieje)
        return true;
    else
        return false;
}
