#!/usr/bin/env python
# -*- coding: utf-8 -*-


def sumuj_wprowadzone():
    wynik = 0
    y = int(input("Ile podasz liczb?: "))
    for i in range(y):
        liczba = int(input("Podaj liczbę: "))
        #print(liczba)
        wynik = wynik + liczba
    print(wynik)


def suma_nieparzystych():
    wynik = 0
    for x in range(1,100,2):
        #print(x)
        wynik = wynik + x
    print(wynik)


def suma_parzystych():
    wynik = 0
    for i in range(0,101,2):
        #print(i)
        wynik = wynik + i
    print(wynik)
    
    
def main(args):
    #suma_parzystych()
    #suma_nieparzystych()
    print(sumuj_wprowadzone())
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
