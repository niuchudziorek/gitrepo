/*
 * lista.cpp
 * 
 * Copyright 2018  <>
 */

#include <iostream>
#include "lista.hpp"

Lista::Lista(){
    head = NULL;
    tail = NULL;
}

Lista::~Lista(){
    while(Usun()) {;};
}

void Lista::Dodaj(int wartosc){
    ELEMENT *el = new ELEMENT;
    el->wartosc = wartosc;
    el->nastepny = NULL;
    if (head == NULL) {
        head = el;
        tail = el;
    } else {
        tail->nastepny = el;
        tail = el;
    }
}

void Lista::Wyswietl(){
    ELEMENT *el = head;
    while (el != NULL) {
        std::cout << el->wartosc << " ";
        el = el->nastepny;
    }
}

bool Lista::Usun(){
    if(head != NULL) {
        if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
        } else {
            ELEMENT *el = head;
            while (el->nastepny != tail){
                el = el->nastepny;
            }
            delete el->nastepny;
            el->nastepny = NULL;
            tail = el;
        }
        return true;
    }
    return false;
}

void Lista::Wstaw(int pozycja, int wartosc) {
    ;
}
