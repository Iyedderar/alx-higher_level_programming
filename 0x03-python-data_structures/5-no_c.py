#!/usr/bin/python3
def no_c(my_string):
    f = ""
    for n in my_string:
        if n != 'c' and n != 'C':
            f.append(n)
    return (f)
