def func(n):
    for i in range(1,n):
        n *= i
    return n
[n , m] = [int(i) for i in input().split()]
print( func(n) // (func(m) * func(n - m)) )
