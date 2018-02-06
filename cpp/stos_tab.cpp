/*
 * stos_tab.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>

using namespace std;

bool czy_pusty(int sp, int sr) {
    if (sp < sr) return true;
    return false;
}

int pop(int stos[], int &sp) {
    sp--;
    return stos [sp];
}

void push(int *stos, int &sp, int dane) {
    cout << dane << " ";
    if (czy_pusty(sp, sr)) {
        stos[sp] = dane;
        sp++;
    } else {
        cout << "Błąd przepełnienia stosu!";
    }
}


int main(int argc, char **argv)
{
    int *stack;
    int sr;
    int sp;
    
    cout << "Podaj rozmiar: "; cin >> sr;
    stack = new int[sr];
    
    srand(time(NULL));
    for (int i=0; i < sr; i++) {
        push(stack, sp, rand()%100 + 1);
    }
    
    cout << endl;
    
    for (int i=0; i < sr; i++) {
        cout << pop(stack, sp) << " ";
    }
    
	return 0;
}

