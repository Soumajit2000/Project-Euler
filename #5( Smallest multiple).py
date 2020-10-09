import math
import functools
t = int(input())
for i in range(t):
    n = int(input())
    print(functools.reduce(lambda x,y:x*y//math.gcd(x,y),range(1,n+1)))
