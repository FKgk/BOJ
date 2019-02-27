def hanoi(N, a, b):
    if N == 1:
        print(a, b)
    else:
        hanoi(N - 1, a, 6 - a - b)
        print(a, b)
        hanoi(N - 1, 6 - a - b, b)

N = int(input())

print( (1 << N) - 1)

if N <= 20:
    hanoi(N, 1, 3)
