#!/usr/bin/env python
# -*- coding: utf-8 -*-

def pobierz_oceny():
    oceny = []
    ocena = float(input("Podaj ocenę: "))
    while ocena > 0:
        if ocena < 7:
            oceny.append(ocena)
        else:
            print("Błędna ocena!!!")
        ocena = float(input("Podaj ocenę: "))
    #print("Podane oceny:", oceny)
    return oceny
    
    
def licz_srednia(oceny):
    print("Otrzymana średnia:", sum(oceny) / len(oceny))
    
    
    
def main(args):
    oceny = pobierz_oceny()
    licz_srednia(oceny)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
