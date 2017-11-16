#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pracownicy_orm.py

from peewee import *


baza_plik = SqliteDatabase('baza.db')


class BaseModel(Model):
    class Meta:
        database = baza_plik
        

class Premia(BaseModel):
    id = CharField(primary_key = True)
    premia = DecimalField()
    
    def __str__(self):
        return self.id
    
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

def kw_c():
    #query = Pracownik.select()
    query = (Dzial
            .select(Dzial.siedziba, fn.Sum(Pracownik.placa).alias('place'))
            .join(Pracownik)
            .group_by(Dzial.siedziba)
            .order_by('place').asc())
    for obj in query:
        print(obj.siedziba, obj.place)
        
def kw_d():
        query = Pracownik.select().join(Dzial)
        
        for obj in query:
            print(obj.id_dzial.id, obj.id_dzial.nazwa, obj.imie, obj.nazwisko)

def kw_e():
        query = Pracownik.select().join(Premia)
        
        for obj in query:
            print(obj.imie, obj.nazwisko, obj.placa * obj.stanowisko.premia)

def kw_f():
        #query = Pracownik.select(fn.Avg(Pracownik.placa).alias('srednia')).where(Pracownik.imie.endswith('a'))
        query = Pracownik.select(fn.Avg(Pracownik.placa).alias('srednia')).group_by(Pracownik.imie.endswith('a'))
                
        for obj in query:
            print(obj.srednia)

def kw_g():
        from datetime import datetime
        query = Pracownik.select(Pracownik.imie, Pracownik.nazwisko, Pracownik.data_zatr.year.alias('rok'))
                
        for obj in query:
            print(obj.imie, obj.nazwisko, datetime.now().year - obj.rok)

def kw_g():
        query = Pracownik.select(fn.Count(Pracownik.id).alias('ilosc')).where(Pracownik.imie.endswith('a')
                
        for obj in query:
            print(obj.ilosc)
        
        
        
def main(args):
    kw_g()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
