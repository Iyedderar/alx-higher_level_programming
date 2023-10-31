#!/usr/bin/python3
def uppercase(str):
    for n in range(len(str)):
        if ord(str[n]) <= 122 and ord(str[n]) >= 97:
            str[n] = chr(ord(str[n]) - 32)
        else:
            continue
    print("{}".format(str))
