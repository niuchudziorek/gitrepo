#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3

def wyniki(dane):
    for rekord in dane:
        print(tuple(rekord))



def kw_a(cur):
    print('1)')
    cur.execute("""
        SELECT Imie, Nazwisko, Klasa
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND Klasa = '1A'
    """)
    wyniki(cur.fetchall())
     
def kw_aa(cur):
    print('2)')
    cur.execute("""
        SELECT Imie, Nazwisko, MAX(EgzHum)
        FROM tbUczniowie
    """)
    wyniki(cur.fetchall())

def kw_aaa(cur):
    print('3)')
    cur.execute("""
        SELECT Klasa, AVG(EgzMat)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND Klasa = '1A'
    """)
    wyniki(cur.fetchall())

def kw_aaaa(cur):
    print('4)')
    cur.execute("""
        SELECT Ocena
        FROM tbUczniowie, tbOceny
        WHERE tbUczniowie.IDUcznia = tbOceny.UczenID
        AND Imie = 'Dorota'
        And Nazwisko = 'Nowak'
    """)
    wyniki(cur.fetchall())

def kw_aaaaa(cur):
    print('5)')
    cur.execute("""
        SELECT AVG(Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        AND Datad > '2012-10-01'
        AND Datad < '2012-10-31'
    """)
    wyniki(cur.fetchall())

def dodaj(cur):
    cur.execute("""
        INSERT INTO tbKlasy
        VALUES (?, ?, ?, ?)
    """, [None, '1B', 2017, 2020])

def aktualizuj(cur):
    cur.execute("""
        UPDATE tbKlasy
        SET klasa = ?
        WHERE klasa = ?
        AND roknaboru = ?
    """, ['1D', '1B', 2017])

def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    con.row_factory = sqlite3.Row
    
    #dodaj(cur)
    aktualizuj(cur)
    con.commit()
    wyniki(cur.execute('SELECT * FROM tbKlasy'))
    #kw_a(cur)
    #kw_aa(cur)
    #kw_aaa(cur)
    #kw_aaaa(cur)
    #kw_aaaaa(cur)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
