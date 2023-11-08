def search_replace(my_list, search, replace):
    new_L = my_list[:]
    for n in range(len(my_list)):
        if my_list[n] == search:
            new_L[n] = replace
    return new_L
