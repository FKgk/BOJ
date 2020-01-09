testcase = int(input())
for i in range(testcase):
    N = input().split(' ')
    ans = 0
    for i in N:
        ans += int(i)
    print(ans)
