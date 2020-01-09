n = [int(i) for i in input().split()]
if n[0] > n[1]:
    n = [n[1], n[0]]

if n[0] == n[1] :
    print(0)
else :
    print(n[1] - n[0] - 1)

for i in range(n[0] + 1, n[1], 1):
    print(i, end=" ")
