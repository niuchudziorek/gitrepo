#!/usr/bin/env python
# -*- coding: utf-8 -*-


def osoba(imie, nazwisko, wiek):
    return{'imie': imie, 'nazwisko': nazwisko, 'wiek': wiek}


def pobierzDane(lista, n):
    for i in range(0, n):
        imie = input('Podaj imię:')
        nazwisko = input('Podaj nazwisko:')
        wiek = int(input('Podaj wiek:'))
        lista.append(osoba(imie, nazwisko, wiek))
    return lista


def wyswietlDane(lista):
    for o in lista:
        print("Imię: {:20}".format(o['imie']))
        print("Nazwisko: {:20}".format(o['nazwisko']))
        print("Wiek: {:20}".format(o['wiek']))
    print()


def zapiszDane(lista):
    with open('osobyp.txt', 'w') as plik:
        for o in lista:
            plik.write(
                o['imie'] + "," + o['nazwisko'] + "," + str(o['wiek']) + "\n")


def zapiszDaneCsv(lista):
    import csv
    with open('osobyp.csv', 'w', newline='') as plik:
        tresc = csv.writer(plik, delimiter=';')
        for o in lista:
            tresc.writerow(o.values())


def czytajDane(nazwa):
    import csv
    with open(nazwa, newline='') as plik:
        tresc = csv.reader(plik, delimiter=';')
        for o in tresc:
            print(o)


def main(args):
    # osoba1 = osoba('Jan', 'Kowalski', '23')
    # print(osoba1['imie'], osoba1['nazwisko'])
    lista = []
    ile = int(input('Ile osób wprowadzisz?'))
    lista = pobierzDane(lista, ile)
    wyswietlDane(lista)
    zapiszDaneCsv(lista)
    czytajDane('osobyp.csv')
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
