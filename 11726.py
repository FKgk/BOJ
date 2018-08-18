n = int(input())
i = 0
two = 0
one = 0
ans = 1
cnt = 1



while(n>1):
    i +=1
    n -=2
    two +=1
if( n == 1):
    i +=1
    one +=1
else:

    ans +=1
    one += 2
    i +=1
    two -=1

while (two > 0):
    for arr in range(1,i+1,1):
        cnt = cnt * arr
    for t in range(1,two+1,1):
        cnt = cnt // t
    for o in range(1,one+1,1):
        cnt = cnt // o
    ans += cnt
    i += 1
    two -= 1
    one += 2
    cnt = 1
print(ans%10007)
