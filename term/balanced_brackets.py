#!/bin/python3
import os


# def isBalanced2(s):
#     s = list(s)

#     opening = "{[("
#     closing = "}])"

#     if s[0] in opening:
#         rev = closing[opening.index(s[0])]
#     else:
#         return False

#     if s[1] == rev:
#         s.pop(1)
#         s.pop(0)
#     elif not isBalanced2(s[1:]):
#         return False

#     return True


# # Complete the isBalanced function below.
# def isBalanced(s):
#     s = list(s)

#     if len(s) % 2 != 0:
#         return 'NO'

#     i = 1
#     while i < len(s):
#         opening = "{[("
#         closing = "}])"

#         if s[0] in opening:
#             rev = closing[opening.index(s[0])]
#         else:
#             return 'NO'

#         if s[i] == rev:
#             s.pop(i)
#             s.pop(0)
#         elif isBalanced2(s[i:]):
#             s = s[s.index(rev)+1:]
#         else:
#             return 'NO'

#     return 'YES'


def isBalanced(s):
    s = list(s)

    opening = "{[("
    closing = "}])"

    for i in ragne(len(s)-1):
        if s[i] in closing and s[i+1] in opening:

            balanced, end_index = isBalanced2(s)
            if balanced:
                if i > 0:
                    s = s[0:i-1]
                    for x in s[end_index:]:
                        s.append(x)

                continue

            return 'NO'

    return 'YES'



if __name__ == '__main__':
    fptr = open('output.txt', 'w')

    t = int(input())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        print(result)
        fptr.write(result + '\n')

    fptr.close()
