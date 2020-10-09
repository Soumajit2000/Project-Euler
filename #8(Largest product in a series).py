#!/bin/python3

import sys


t = int(input().strip())
for a0 in range(t):
    length, span = map(int,input().split(' '))
    num = str(input())
    best = 0
    for start in range((length - span) + 1):
      current = 1
      for j in (num[start:span+start]):
        current = current * int(j)
      if (best < current):
        best = current
    print(best)
