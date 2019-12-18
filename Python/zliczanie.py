#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    l5 = 0
    l7 = 0
    a = int(input('podaj liczbę:'))
    while a != 0:
        if a % 5 == 0:
            l5 = l5 + 1
        if a % 7 == 0:
            l7 = l7 + 1
        a = int(input('podaj liczbę:'))
    print("Ilość liczb podzielnych przez 5:", l5)
    print("Ilość liczb podzielnych przez 7:", l7)
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
