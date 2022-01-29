n=int(input())
arr=list(map(int,input().split()))
a=0
p=0
for k in range(0,n):
    a=a+arr[k]
for j in range(0,n):
    d=(arr[j] - (a/n))**2
    p=p+d
sigma=float ((p/n)**(1/2))
print(sigma)

