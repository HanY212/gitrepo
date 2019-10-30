#!/usr/bin/env python
# -*- coding: utf-8 -*-

def main(args):
    a = input("Podaj długość boku:" )
    b = input("Podaj długość boku:" )
    print("Pole prostokąta:", int(a) * int(b), "cm2")
    c = input("Podaj długość podstawy:" )
    d = input("Podaj długość wysokości:" )
    print("Pole trójkąta:", int(c) * int(d) * 0.5, "cm2")
    e = input("Podaj długość promienia:" )
    print("Pole koła:", int(e) * int(e) * 3.14, "cm2")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
