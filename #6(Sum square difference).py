import functools
t = int(input())
for i in range(t):
    n = int(input())
    sum1 = 0
    for i in range(1,n+1):
        sum1= sum1 + i
    sum2 = (n*(n+1)*(2*n+1))/6
    ans = (sum1**2 - sum2)
    print(int(ans))
