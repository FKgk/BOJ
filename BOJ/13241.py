[a ,b] =[ int(i) for i in input().split() ] 
if b > a : [a, b] = [b, a]
[ans, n] = [a * b, 1]
while n:
    n = a % b
    a = b
    b = n
print(int(ans / a))
