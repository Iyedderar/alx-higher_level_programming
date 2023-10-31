#!/usr/bin/python3
def uppercase(str):
    for n in range(len(str)):
        if ord(str[n]) <= 90 and ord(str[n]) >= 65:
            str[n] = chr(ord(str[n]) - 32)
        else:
            continue
