/*
 * struktury.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <fstream>

using namespace std;

struct osoba {
    char imie[20];
    char nazwisko[20];
    int wiek;
};

void pobierzDane(osoba t[], int n) {
    for(int i = 0; i < n; i++) {
        cin.ignore(1);
        cout << "Podaj imię: ";
        cin.getline(t[i].imie, 20);
        cout << "Podaj nawisko: ";
        cin.getline(t[i].nazwisko, 20);
        cout << "Podaj wiek: ";
        cin >> t[i].wiek;
    }
}

void wyswietlDane(osoba t[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Imię: " << setw(20) << setfill('_') << t[i].imie << endl;
        cout << "Nazwisko: " << setw(18) << setfill('_') << t[i].nazwisko << endl;
        cout << "Wiek: " << setw(17) << setfill('_') << t[i].wiek << endl;
    }
}

osoba pobierzInf(osoba u) {
    cout << "Podaj imię: ";
    cin.getline(u.imie, 20);
    cout << "Podaj nawisko: ";
    cin.getline(u.nazwisko, 20);
    cout << "Podaj wiek: ";
    cin >> u.wiek;
    return u;
}

void wyswietlInf(osoba u) {
    cout << "Imię: " << setw(20) << setfill('_') << u.imie << endl;
    cout << "Nazwisko: " << setw(18) << setfill('_') << u.nazwisko << endl;
    cout << "Wiek: " << setw(17) << setfill('_') << u.wiek << endl;
}

void zapiszOsoby(osoba t[], int n) {
        ofstream plik("osoby.txt", ios::app);
        if (!plik.is_open()) {
            cout << "Błąd otwarcia pliku!";
        } else {
            for(int i = 0; i < n; i++){
                cout << t[i].imie << "," << t[i].nazwisko << "," << t[i].wiek << endl;
                plik << t[i].imie << "," << t[i].nazwisko << "," << t[i].wiek << endl;
            }
        }
}

void czytajDane(osoba t[]) {
    ifsteram plik ("osoby.txt");
    string 
}

int main(int argc, char **argv)
{
    int ile;
    cout << "Ile osób chcesz wprowadzić: "; cin >> ile;

    osoba uczniowie[ile];
    //uczen = pobierzInf(uczen);
    pobierzDane(uczniowie, ile);
    wyswietlDane(uczniowie, ile);
    zapiszOsoby(uczniowie, ile);
	return 0;
}

