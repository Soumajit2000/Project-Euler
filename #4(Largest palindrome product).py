t = int(input())
ans = 0
for i in range(t):
    N = int(input())
    for x in range(990,99,-11):
        for y in range(999,99,-1):
            prod = x * y
            if((str(prod)==str(prod)[::-1]) and ans < prod < N):
                ans = prod
    print(ans)
    ans = 0
