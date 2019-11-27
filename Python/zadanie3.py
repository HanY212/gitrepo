#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    wynik = 0
    x = int(input("Podaj liczbę:"))
    z = x * x
    while wynik < z:
        wynik = wynik + z
    print(wynik)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
