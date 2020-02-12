#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje.py

l1 = 10 #globalna

def drukuj():
    print(l1)

def drukuj2(l1):
    print(l1)
    l1 = 0
    return l1

def main(args):
    l1 = 20 #lokalna
    print(l1)
    drukuj()
    l1 = drukuj2(l1)
    print(l1)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
