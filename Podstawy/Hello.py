#!/usr/bin/env python
# -*- coding: utf-8 -*-



ROKTERAZ = 2017
ROKPY = 1991


def parzyste(n):
    ile = list(range(0, n+1, 2))
    print(ile)
    return len(ile)


def main(args):
    
    
    imie = input("imię? ")
    print("Witaj", imie)
    wiek = int(input("Wiek? "))
    rok=ROKTERAZ - wiek
    print("Więc urodziłeś się w ", rok)
    
    if ROKPY < rok:
        print("Jesteś starszy")
    elif ROKPY > rok:
        print("Jesteś młodszy")
    elif ROKPY == rok:
        print("Tyle samo lat!")
        
    n = int(input("Podaj liczbę naturalną: "))
    print('Ilość parzystych:' , parzyste(n))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
