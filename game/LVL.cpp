//
// Created by lili on 22.01.17.
//
#include "libraries.h"
#include "LVL.h"
#include "Funkcje.h"



LVL::LVL(string nazwa) {
    nazwa_poziomu = nazwa;
    nazwa += ".txt";
    nazwa = nazwa_poziomu + "/" + nazwa;
    ile_potworow = 0;

    KLUCZE = 0;

    fstream plik;
    plik.open(nazwa.c_str(),std::ios::in);

    char bufor[255];

    if(plik.good()==true)
    {
        //cout<<" weszlo do pliku"<<endl;
        plik.getline(bufor,255);
        numer = atoi(bufor);

        plik.getline(bufor,255);
        nazwa = bufor;

        plik.getline(bufor,255,';');
        zycia = atoi(bufor);
        ZYCIA =zycia;

        plik.getline(bufor,255,';');
        szerokosc = atoi(bufor);

        for(int y=0 ; y<17 ; y++)
        {
            for(int x=0 ; x<szerokosc ; x++)
            {
                plik.getline(bufor,255,';');
                plansza[x][y]= atoi(bufor);
            }
        }

        plik.close();
    }
    PLANSZA_SZEROKOSC = szerokosc;
}

void LVL::ladowanie() {
    trawa=laduj_obraz(nazwa_poziomu + "/" + "trawa.bmp");
    platforma=laduj_obraz(nazwa_poziomu + "/" + "platforma.bmp");
    woda=laduj_obraz(nazwa_poziomu + "/" + "woda.bmp");
    gwiazdka=laduj_obraz(nazwa_poziomu + "/" + "gwiazdka.bmp");
    kolce=laduj_obraz(nazwa_poziomu + "/" + "kolce.bmp");
    klucz=laduj_obraz(nazwa_poziomu + "/" + "klucz.bmp");
    koniec=laduj_obraz(nazwa_poziomu + "/" + "koniec.bmp");

    sky=laduj_obraz(nazwa_poziomu + "/" + "sky.gif");
    far=laduj_obraz(nazwa_poziomu + "/" + "far.gif");
    middle=laduj_obraz(nazwa_poziomu + "/" + "middle.gif");

    tlo_mapy=laduj_obraz("Dane/minimapa.bmp");
}

int LVL::jaki_numer() {
    return numer;
}

string LVL::jaka_nazwa() {
    return  nazwa;
}

int LVL::jaki_obiekt(int x, int y) {
    int xp =(x)/32;
    int yp = y/32;
    //wyswietl(xp*32-SCROLL,yp*32,gwiazdka,ekran);   //  sprawdzneie kolizji
    return plansza[xp][yp];
}

void LVL::pokaz() {
    SDL_FillRect(ekran, &ekran->clip_rect, SDL_MapRGB(ekran->format, 0x00, 0x00,0x00));

    wyswietl(0,0,sky,ekran);

    wyswietl(-SCROLL*0.2,300,far,ekran);
    if(-SCROLL*0.2>0)
        wyswietl(-SCROLL*0.2-far->w,300,far,ekran);
    if(-SCROLL*0.2+far->w < EKRAN_SZEROKOSC)
        wyswietl(-SCROLL*0.2+far->w,300,far,ekran);

    wyswietl(-SCROLL*0.6,400,middle,ekran);
    if(-SCROLL*0.6>0)
        wyswietl(-SCROLL*0.6-middle->w,400,middle,ekran);
    if(-SCROLL*0.6+middle->w < EKRAN_SZEROKOSC)
        wyswietl(-SCROLL*0.6+middle->w,400,middle,ekran);

    for(int i=0; i <ile_potworow; i++) {
        if(potwory[i]->czy_zyje()==true)
        {
            potwory[i]->akcja();
            potwory[i]->pokaz();
        }
    }

    wyswietl(0,0,tlo_mapy,ekran);

    for(int y=0 ; y<17 ; y++)
    {
        for(int x=0 ; x < szerokosc ; x++)
        {
            if((x*32-SCROLL>=-32)&&(x*32-SCROLL<=EKRAN_SZEROKOSC))
            {
                if(plansza[x][y]==PLATFORMA)
                    wyswietl(x*32-SCROLL,y*32,platforma,ekran);
                if(plansza[x][y]==TRAWA)
                    wyswietl(x*32-SCROLL,y*32,trawa,ekran);
                if(plansza[x][y]==WODA)
                    wyswietl(x*32-SCROLL,y*32,woda,ekran);
                if(plansza[x][y]==GWIAZDKA)
                    wyswietl(x*32-SCROLL,y*32,gwiazdka,ekran);
                if(plansza[x][y]==KLUCZ)
                    wyswietl(x*32-SCROLL,y*32,klucz,ekran);
                if(plansza[x][y]==KOLCE)
                    wyswietl(x*32-SCROLL,y*32,kolce,ekran);
                if(plansza[x][y]==KONIEC)
                    wyswietl(x*32-SCROLL,y*32,koniec,ekran);
                if(plansza[x][y]==POTWOR)
                {
                    int max=x;
                    int min=x;
                    for(int ix = 1; ix< 10; ix++)
                    {
                        if((plansza[x+ix][y+1]==TRAWA)||(plansza[x+ix][y+1]==PLATFORMA))
                            max=x+ix;
                        else
                            break;
                    }
                    for(int ix = 1; ix< 10; ix++)
                    {
                        if((plansza[x-ix][y+1]==TRAWA)||(plansza[x-ix][y+1]==PLATFORMA))
                            min=x-ix;
                        else
                            break;
                    }

                    potwory[ile_potworow]= new Potwor(x*32,y*32, min*32,max*32);
                    ile_potworow++;
                    plansza[x][y]=NIC;
                }
            }

            //Minimapa:

            Uint32 kolor;
            if(plansza[x][y]!=NIC)
            {
                if((plansza[x][y]==PLATFORMA)||(plansza[x][y]==TRAWA))
                    kolor = 0xff0000;
                else if(plansza[x][y]==WODA)
                    kolor = 0x0000ff;
                else
                    kolor= 0xffff00;

                put_pixel32(ekran, x*3, y*3, kolor );
                put_pixel32(ekran, x*3+1, y*3, kolor );
                put_pixel32(ekran, x*3+2, y*3, kolor );
            }
        }
    }
}

int LVL::wez(int x, int y) {

    for(int i=0; i <ile_potworow; i++) {
        if(potwory[i]->czy_dopadl(x,y)==true) {
            potwory[i]->gin();
            //delete potwory[i];
            ZYCIA--;
        }
    }

    x=x/32;
    y/=32;

    if(plansza[x][y]==GWIAZDKA)
    {
        plansza[x][y]=NIC;
        GWIAZDKI+=1;

    }
    if(plansza[x][y]==KLUCZ)
    {
        plansza[x][y]=NIC;
        KLUCZE+=1;

    }
    if(plansza[x][y]==KOLCE)
    {
        ZYCIA--;
        plansza[x][y]=NIC;

    }
    if(plansza[x][y]==KONIEC)
    {
        if(KLUCZE==2)
            return true;
        else
            nowy_komunikat("Zbierz 2 klucze!", 80);
    }
    return false;
}