#!/usr/bin/python3
def uppercase(str):
    for n in range(len(str)):
        if ord(str[n]) <= 122 and ord(str[n]) >= 97:
            print("{}".format(chr(ord(str[n]) - 32)),end="")
    print("")
