def fibonacci(n):
  result = []
  a = 1
  b = 2


  while(a<= n):
    result.append(a)
    temp = a
    a = b
    b = b + temp
  return result

sum = 0
t = int(input())
for i in range(t):
    n = int(input())
    li = fibonacci(n)
    for num in li:
        if(num%2==0):
            sum= sum + num

    print(sum)
    sum = 0
