#!/bin/python3

import os


# Complete the kangaroo function below.
def kangaroo(x1, v1, x2, v2):
    if v1 < v2 and x1 + v1 < x2:
        return 'NO'
    elif v1 > v2 and x1 + v1 > x2 + v2:
        return 'NO'
    elif v1 == v2 or v1 < v2:
        return 'NO'
    else:
        a = x1
        b = x2
        x = 1
        while(a < b):
            a = x1 + v1*x
            b = x2 + v2*x
            x += 1

        if a == b:
            return 'YES'
        else:
            return 'NO'


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    x1V1X2V2 = input().split()

    x1 = int(x1V1X2V2[0])

    v1 = int(x1V1X2V2[1])

    x2 = int(x1V1X2V2[2])

    v2 = int(x1V1X2V2[3])

    result = kangaroo(x1, v1, x2, v2)

    fptr.write(result + '\n')

    fptr.close()
