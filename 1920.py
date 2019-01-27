n = input()
n = [int(i) for i in input().split()]
di = dict()
for i in n:
    di[i] = 1
n = input()
n = [int(i) for i in input().split()]
for i in n:
    try:
        print(di[i])
    except:
        print(0)
