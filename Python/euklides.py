#!/usr/bin/env python
# -*- coding: utf-8 -*-



def main(args):
    a = int(input('Podaj liczbę: '))
    b = int(input('Podaj liczbę: '))
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    print(a)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
