[n , m] = [int(i) for i in input().split()]
ans = 1
for i in range(1, m + 1, 1):
    ans *= n
    ans //= i
    n -= 1
print(ans)
