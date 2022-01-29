# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
a=list(map(int, input().split(" ")))
b=list(map(int, input().split(" ")))
c=[]
for i in range(len(a)):
            s=a[i]*b[i]
            c.append(s)
print(round(sum(c)/sum(b),1))
