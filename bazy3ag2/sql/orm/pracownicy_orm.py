#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pracownicy_orm.py

from peewee import *
from dane import *


baza_plik = SqliteDatabase('baza.db')


class BaseModel(Model):
    class Meta:
        database = baza_plik
        

class Premia(BaseModel):
    id = CharField(primary_key = True)
    premia = DecimalField()
    
class Dzial(BaseModel): 
    id = IntegerField(primary_key = True)
    nazwa = CharField()
    siedziba = CharField()
    

class Pracownik(BaseModel):
    id = CharField(primary_key = True)
    nazwisko = CharField()
    imie = CharField()
    stanowisko = ForeignKeyField(Premia)
    data_zatr = DateField()
    placa = DecimalField(decimal_places=2)
    id_dzial = ForeignKeyField(Dzial)
    premia = DecimalField(decimal_places=2, default=0)

baza_plik.connect()
baza_plik.create_tables([Premia, Dzial, Pracownik], True)

#obiekt = Premia(id='Kierowca', premia=0.2)
#obiekt.save()

#dane = [
#    {'id': 'Kierowca', 'premia': '0.2'},
#    {'id': 'Dyrektor', 'premia': '0.7'},
#    {'id': 'Inżynier', 'premia': '0.4'}
#]

#for rekord in dane:
#Premia.create(id=dane['id'], premia=dane['premia'])
#Premia.create(id='Kierowca', premia=0.2)
#Dzial.create(id=10, z=nazwa="Informatyka", siedziba="Warszawa")

premia = dane_z_pliku('premia.txt')
premia = wyczysc_dane(premia, 1)
#print(premia)
premia = [dict(zip(Premia._meta.sorted_field_names, rekord))
for rekord in premia]



pracownicy = dane_z_pliku('pracownicy.txt')
pracownicy = wyczysc_dane(pracownicy, 5)
#print(pracownicy)
pracownicy = [dict(zip(Pracownik._meta.sorted_field_names, rekord))
for rekord in pracownicy]



dzial = dane_z_pliku('dział.txt')
#print(Premia._meta.sorted_field_names)
dzial = [dict(zip(Dzial._meta.sorted_field_names, rekord))
for rekord in dzial]

print(premia)
print(dzial)
print(pracownicy)

with baza_plik.atomic():
    Premia.insert_many(premia).execute()
    Dzial.insert_many(dzial).execute()
    Pracownicy.insert_many(pracownicy).execute()

baza_plik.commit()

def main(args):
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
