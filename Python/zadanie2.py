#!/usr/bin/env python
# -*- coding: utf-8 -*-

    #if a < 0 or b < 0 or a >= b:
    #    print('Błędne dane!')
    #    return

def sumuj_nieparzyste(a, b):
    suma = 0
    for liczba in range(a, b + 1):
        if liczba % 2 == 1:
            suma = suma + liczba
    print(suma)


def sumuj_parzyste(a, b):
    suma = 0
    for liczba in range(a, b + 1):
        if liczba % 2 == 0:
            suma = suma + liczba
    print(suma)


def main(args):
    a = b = -1
    while a < 0:
        a = int(input("Podaj 1 liczbę: "))
    while a >= b:
        b = int(input("Podaj 2 liczbę: "))
    sumuj_nieparzyste(a, b)
    #sumuj_parzyste(a, b)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
