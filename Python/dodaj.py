#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a = input("Podal liczbę: ")
    b = input("Podal liczbę: ")
    print("Suma:", int(a) + int(b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
