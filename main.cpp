#include "libraries.h"
#include "Postac.h"
#include "Funkcje.h"

using namespace std;

SDL_Event zdarzenie;

int main( )
{
    bool zakonczyc=false;

    if(inicjalizuj() == false)
        return 1;
    if(laduj_pliki() == false)
        return 1;

    Postac Kapitan;
    Level.ladowanie();
    laduj_pliki();

    Uint8 *klawisze = NULL;

    while(zakonczyc == false) {
        while( SDL_PollEvent(&zdarzenie))
        {
            if(zdarzenie.type == SDL_QUIT)
                zakonczyc=true;
            if( zdarzenie.type == SDL_KEYDOWN )
                if( zdarzenie.key.keysym.sym == SDLK_ESCAPE )
                    zakonczyc=true;
        }

        Level.pokaz();
        Kapitan.pokaz();

        if(stargun.czy_istnieje()) {
            stargun.akcja();
            stargun.pokaz();
        }

        wyswietl(0,540,menu,ekran);

        if(ZYCIA<1) {
            nowy_komunikat("Game Over!", 80);
            Kapitan = Postac();
            Level = LVL("LVL1");
            Level.ladowanie();
        }
\
        komunikat_wyswietl();

        stringstream bufor;

        bufor.str("");bufor<<ZYCIA;
        pzycia = TTF_RenderText_Solid(czcionka,bufor.str().c_str(),kolortekstu);
        wyswietl(100,550, pzycia, ekran);
        bufor.str("");bufor<<GWIAZDKI;
        pgwiazdki = TTF_RenderText_Solid(czcionka,bufor.str().c_str(),kolortekstu);
        wyswietl(300,550, pgwiazdki, ekran);
        bufor.str("");bufor<<KLUCZE;
        pklucze = TTF_RenderText_Solid(czcionka,bufor.str().c_str(),kolortekstu);
        wyswietl(500,550, pklucze, ekran);

        //wyzerowanie scrolla:
        SCROLL=Kapitan.polozenie()-0.5*EKRAN_SZEROKOSC;
        if(SCROLL<0)
            SCROLL=0;
        if(SCROLL>PLANSZA_SZEROKOSC*32-EKRAN_SZEROKOSC)
            SCROLL=PLANSZA_SZEROKOSC*32-EKRAN_SZEROKOSC;

        klawisze = SDL_GetKeyState( NULL );
        if(Kapitan.akcja(klawisze)) {   // kolejny level
            nowy_komunikat("Kolejny poziom!", 80);
            Kapitan = Postac();
            Level = LVL("LVL2");
            Level.ladowanie();
        }


        if(SDL_Flip(ekran) == -1 )
            return 1;
    }

    posprzataj();

    return 0;
}