/*
 * lista_main.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>
#include "lista.hpp"

using namespace std;

int main(int argc, char **argv)
{
	Lista lista;
    lista.Dodaj(1);
    lista.Dodaj(3);
    lista.Dodaj(4);
    lista.Dodaj(6);
    lista.Wyswietl();
    lista.Usun();
    cout << endl;
    lista.Wyswietl();
	return 0;
}

