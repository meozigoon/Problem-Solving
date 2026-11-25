from math import *

def P6(n):
    if n == 1:
        return 3
    else:
        return int(pi / (atan(sqrt(1 / n))))