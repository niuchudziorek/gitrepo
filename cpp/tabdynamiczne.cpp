/*
 * wskazniki.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>

using namespace std;



void drukuj(float *t, int ile) {
    for(int i=0; i < ile; i++){
        cout << *(t+i) << endl;
    }
}


void wprowadz(float *t, int ile) {
    for(int i=0; i < ile; i++){
        cout << "Podaj liczbę: ";
        cout << "Adres elementu: " << (t + i) << endl;
        cin >> *(t+i);
    }
}

float tab1W() {
    cout << "Ile podasz liczb?";
    int ile;
    cin >> ile;
    
    cout << sizeof(ile) << endl;
    
    try {
        float *ptab = NULL;
        ptab = new float[ile];
        wprowadz(ptab, ile);
        drukuj(ptab, ile);
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    return 0;
}


void wypelnij2W(tab, w, k) {
    srand(time(NULL));
    for(int i = 0; i < w; i++) {
            for(int j = 0; j < k; j++)
    }
}

int tab2W() {
    int w, k, i, j;
    cout << "Podaj liczbę wierszy i kolumn: ";
    cin >> w >> k;
    
    try {
        tab = new int*[w];
        wprowadz(tab, ile);
        drukuj(tab, ile);
    } catch(bad_alloc) {
        cout << "Za mało pamięci!";
        return 1;
    }
    
    for(i = 0; i < w; i++) {
        try {
            tab[i] = new int[k];
        }catch(bad_alloc) {
            cout << "Za mało pamięci!";
            return 1;
        }
    }
    
wypelnij2W(tab, w, k);
    
    
    return 0;
}


int main(int argc, char **argv)
{
    tab1W();
    return 0;
}

q
