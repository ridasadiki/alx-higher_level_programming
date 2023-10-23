#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    """Print x elememts of a list.
    done by Rida
    Args:
        my_list (list): The list to print elements from.
        x (int): nmbr of elements of my_list to print.

    Returns:
        nmbr of elements printed
    """
    ret = 0
    for i in range(x):
        try:
            print("{}".format(my_list[i]), end="")
            ret += 1
        except IndexError:
            break
    print("")
    return (ret)
