//
// Created by lili on 22.01.17.
//
#include "libraries.h"
#include "Funkcje.h"

SDL_Surface *menu = NULL;
SDL_Surface *pzycia = NULL;
SDL_Surface *pklucze = NULL;
SDL_Surface *pgwiazdki =NULL;
int PLANSZA_SZEROKOSC=0;
int ZYCIA = 0;
int SCROLL = 0;
int KLUCZE = 0;
int GWIAZDKI = 0;
SDL_Surface *ekran = NULL;
TTF_Font *czcionka = NULL;
Pocisk stargun;
LVL Level;

SDL_Surface *tlo_komunikatu = NULL;
int CZAS_KOMUNIKATU = 0;
SDL_Surface *tresc_komunikatu = NULL;
SDL_Color kolortekstu = {0,0,0};
SDL_Surface* oryginalnyObraz = NULL;
SDL_Surface* optymalnyObraz = NULL;

Mix_Music* music;

SDL_Surface *laduj_obraz(std::string nazwa_pliku ) {


    oryginalnyObraz = IMG_Load(nazwa_pliku.c_str());

    if( oryginalnyObraz != NULL )
    {
        optymalnyObraz = SDL_DisplayFormat(oryginalnyObraz);

        SDL_FreeSurface(oryginalnyObraz);
    }
    if( optymalnyObraz != NULL )
    {
        Uint32 kluczKoloru = SDL_MapRGB(optymalnyObraz->format,0xFF,0x00,0xFF); // niewidzialne
        SDL_SetColorKey(optymalnyObraz, SDL_SRCCOLORKEY, kluczKoloru);
    }
    return optymalnyObraz;
}

void wyswietl(int x, int y, SDL_Surface *zrodlo, SDL_Surface *cel) {
    SDL_Rect miejsce;

    miejsce.x = x;
    miejsce.y = y;

    SDL_BlitSurface(zrodlo, NULL, cel, &miejsce);
}

Uint32 get_pixel32(SDL_Surface *powierzchnia, int x, int y) {
    Uint32 *pixels = (Uint32 *) powierzchnia->pixels;
    return pixels[(y * powierzchnia->w) + x];
}

void put_pixel32(SDL_Surface *powierzchnia, int x, int y, Uint32 piksel) {
    Uint32 *piksele = (Uint32 *) powierzchnia->pixels;
    //wskazany pixel
    piksele[(y * powierzchnia->w) + x] = piksel;
}

SDL_Surface *odwroc(SDL_Surface *powierzchnia, int flagi) {

    SDL_Surface *odwrocony = NULL;

    if (powierzchnia->flags & SDL_TRUE)
        odwrocony = SDL_CreateRGBSurface(SDL_SWSURFACE, powierzchnia->w, powierzchnia->h,
                                         powierzchnia->format->BitsPerPixel, powierzchnia->format->Rmask,
                                         powierzchnia->format->Gmask, powierzchnia->format->Bmask, 0);

    else
        odwrocony = SDL_CreateRGBSurface(SDL_SWSURFACE, powierzchnia->w, powierzchnia->h,
                                         powierzchnia->format->BitsPerPixel, powierzchnia->format->Rmask,
                                         powierzchnia->format->Gmask, powierzchnia->format->Bmask,
                                         powierzchnia->format->Amask);


    for (int x = 0, rx = odwrocony->w - 1; x < odwrocony->w; x++, rx--) {

        for (int y = 0, ry = odwrocony->h - 1; y < odwrocony->h; y++, ry--) {

            Uint32 pixel = get_pixel32(powierzchnia, x, y);

            if ((flagi & PIONOWO) && (flagi & POZIOMO))
                put_pixel32(odwrocony, rx, ry, pixel);
            else if (flagi & POZIOMO)
                put_pixel32(odwrocony, rx, y, pixel);
            else if (flagi & PIONOWO)
                put_pixel32(odwrocony, x, ry, pixel);
        }
    }



    return odwrocony;
}

int inicjalizuj() {
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
        return 1;

    //swsurface albo hwsurface - zastanaowic sie czy dostep pixelowy
    ekran = SDL_SetVideoMode(EKRAN_SZEROKOSC, EKRAN_WYSOKOSC, EKRAN_GLEBIA, SDL_SWSURFACE); //| SDL_FULLSCREEN

    if (ekran == NULL)
        return 1;

    if (TTF_Init() == -1)
        return false;

    // SDL_WM_SetCaption( "Gra", NULL );

    return true;
}

int laduj_pliki() {
    czcionka = TTF_OpenFont("arial.ttf", 40);
    if (czcionka == NULL)
        return false;

    tlo_komunikatu = laduj_obraz("Dane/tlo_komunikat.bmp");

    menu = laduj_obraz("Dane/menu.bmp");

    Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT,2,4096);
    music = Mix_LoadMUS("mario.wav");
    Mix_PlayMusic(music,-1);

    return true;
}

void posprzataj() {

    SDL_FreeSurface(pzycia);
    SDL_FreeSurface(pklucze);
    SDL_FreeSurface(pgwiazdki);
    Mix_FreeMusic(music);

    TTF_CloseFont(czcionka);
    Mix_CloseAudio();
    SDL_Quit();
}


void nowy_komunikat(std::string co, int ile_czasu) {
    CZAS_KOMUNIKATU = 60;
    std::stringstream bufor;
    bufor.str("");
    bufor << co;
    tresc_komunikatu = TTF_RenderText_Solid(czcionka, bufor.str().c_str(), kolortekstu);
}


void komunikat_wyswietl() {
    if (CZAS_KOMUNIKATU != 0) {
        wyswietl(200, 100, tlo_komunikatu, ekran);
        wyswietl(250, 150, tresc_komunikatu, ekran);
        CZAS_KOMUNIKATU--;
    }
}
