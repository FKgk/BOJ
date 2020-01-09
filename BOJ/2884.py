a, b = [int(i) for i in input().split(' ')]
if b - 45 < 0: a = (a + 23)%24
b = (b + 15) % 60
print(a, b)
