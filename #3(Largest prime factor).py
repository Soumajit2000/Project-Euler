import math

def primefactor(n):
    ans = 0
    while(n%2==0):
        ans = 2
        n = n/2
    
    for i in range(3, int(math.sqrt(n))+1, 2):
        while(n%i==0):
            ans = i
            n=n/i
    
    if(n>2):
        ans = n
    return ans

t = int(input())
for i in range(t):
    n = int(input())
    ans = int(primefactor(n))
    print(ans)
    ans = 0
