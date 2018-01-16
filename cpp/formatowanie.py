#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  formatowanie.py
#  
#  Copyright 2018  <>
#  


def main(args):
    li = 100
    lf = 123.654
    print("Liczba: {}".format(li))
    print("Liczba: {1} {0}".format(li, lf))
    print("Liczba: {:20} | {:10}".format(li, lf))
    print("Liczba: {:<20} | {:<10}".format(li, lf))
    print("Liczba: {:^20} | {:^10}".format(li, lf))
    print("Liczba: {:_^20} | {:_^10}".format(li, lf))
    print("Liczba: {:_^20.2} | {:_^10.6}".format(li, lf))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
