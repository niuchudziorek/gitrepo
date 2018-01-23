#ifndef KLASA_H
#define KLASA_H

class Klasa {
private:
    char imie;
    char nazwisko;
public:
    int klasa;
    int * OCENY = new int [100];
    float srednia();
    int ustaw_klase();
};

#endif


/*
KLASA UCZEN
imie
nazwisko
klasa
oceny
srednia
ustaw_klase("1A")
*/
