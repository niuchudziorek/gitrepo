#ifndef KLASA_H
#define KLASA_H

class Klasa {
private:
        int imie;
        int nazwisko;
public:
    Klasa (int, char);
    void zapisz (int, int);
    void wypisz();
    int get_l();
    int get_m();
    void skracaj();
};

#endif
