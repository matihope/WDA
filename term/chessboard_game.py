#!/bin/python3

import math
import os
import random
import re
import sys


def possible_moves(x, y):
    moves_available = []

    def move1(x, y): return (x - 2, y + 1)

    def move2(x, y): return (x - 2, y - 1)

    def move3(x, y): return (x + 1, y - 2)

    def move4(x, y): return (x - 1, y - 2)

    moves = [move1, move2, move3, move4]
    for i in range(len(moves)):
        move = moves[i](x, y)
        if move[0] < 1 or move[1] < 1:
            continue

        passed = False
        for test_move in moves:
            test_pos = test_move(x, y)
            if not (test_pos[0] < 1 or test_pos[1] < 1):
                passed = True
                break

        if passed:
            moves_available.append(move)

    return moves_available


def recursive_possibilties(x, y, move_num):
    # return amount of moves till the end

    moves = possible_moves(x, y)  # for each move check amount of moves till the end
    print(f'for {x}, {y} there are: {moves}')
    if len(moves) < 1:
        return move_num

    move_num += 1
    answer = []
    x = 1
    while len(answer) == 0:
        [answer.append(recursive_possibilties(move[0], move[1], move_num)) for move in moves if len(move) == x]
        x += 1

    return answer if type(answer) is int else answer[0]


def new(x, y):
    moves = possible_moves(x, y)

    if len(moves) == 0:
        return 0

    for move in moves:
        if all([len(x) == 0 for x in possible_moves(move[0], move[1])]):
            return 1

    answer = [new(m[0], m[1]) for m in moves]
    for i in range(100):
        for a in answer:
            if a == i:
                return 1 + a
    # return 1 + [new(m[0], m[1]) for m in moves].sort()[0]


# Complete the chessboardGame function below.
def chessboardGame(x, y):
    # move_count = recursive_possibilties(x, y, 0)
    move_count = new(x, y)
    print(f'Move count: {move_count}')
    move_count = move_count % 2
    return 'First' if move_count == 1 else 'Second'


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(2):
        xy = input().split()

        x = int(xy[0])

        y = int(xy[1])

        result = chessboardGame(x, y)
        if result is not None:
            print(result)
        print('-----------')

        # fptr.write(result + '\n')

    # fptr.close()
