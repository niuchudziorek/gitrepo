/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>

using namespace std;

class Ulamek {
private:
    int licznik;
    int mianownik;
public:
    Ulamek (int, int);
    void zapisz(int, int);
    void wypisz() {
        cout << licznik << "/" << mianownik;
    }
    int get_l() {
        return licznik;
    }
    int get_m() {
        return mianownik;
    }
    int skracaj() {
        
    }
};
/*
void Ulamek::zapisz(int l, int m) {
    licznik = l;
    if(m != 0) mianownik = m;
    else {
        cout << "Mianownik nie może byc zerem!" << endl;
        exit(1);
    }
}

*/

Ulamek::Ulamek(int l, int m) {
    licznik = l;
    if(m != 0) mianownik = m;
    else {
        cout << "Mianownik nie może byc zerem!" << endl;
        exit(1);    
    }
}

int main(int argc, char **argv)
{
	Ulamek ul1(4, 5);
    Ulamek ul2(1, 7);
    //ul1.zapisz(4, 5);
    //ul2.zapisz(1, 7);
    cout << "1 ułamek:";
    ul1.wypisz();
    cout << endl << "2 ułamek:";
    ul2.wypisz();
	cout << ul1.licznik << endl;
    return 0;
}

