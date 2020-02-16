#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    girl_over_paid = abs((sum(bill) - bill[k])//2 - b)
    if not girl_over_paid:
        print('Bon Appetit')
    else:
        print(girl_over_paid)

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)
