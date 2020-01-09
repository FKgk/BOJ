n = int(input())
fibo = [0, 1]
for i in range(n):
    fibo = [fibo[1] , fibo[0] + fibo[1]]
print(fibo[0])
