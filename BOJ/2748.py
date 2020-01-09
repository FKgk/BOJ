n1 =0
n2 = 1
n = int(input(""))
for i in range(1,n,1):
    n1 , n2 =[n2,n1+n2]
print(n2)
