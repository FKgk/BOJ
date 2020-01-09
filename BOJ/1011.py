t = int(input())
for i in range(t):
    n1, n2 = input().split()
    distance = ( ( (int(n2) - int(n1)) * 4) ** (1/2) ) - 1
    a = distance % 1
    if a:
        ans = distance - a + 1
    else:
        ans = distance - a
    print("%d"%ans)
