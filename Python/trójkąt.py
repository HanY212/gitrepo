#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = int(input("Podaj bok: "))
    b = int(input("Podaj bok: "))
    c = int(input("Podaj bok: "))
    
    if a + b > c:
        if a + c > b:
            if b + c > a:
                print("da sie zbudować trójkąt")
                return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
