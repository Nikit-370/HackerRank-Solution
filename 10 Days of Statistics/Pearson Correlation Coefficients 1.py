import math
if __name__=='__main__':
    n=int(input())
    X=list(map(float,input().split()))
    Y=list(map(float,input().split()))
    muX=sum(X)/n
    muY=sum(Y)/n
    sqX=[]
    sqY=[]
    proXY=[]
    for i in range(n):
        sqX.append((X[i]-muX)*(X[i]-muX))
        sqY.append((Y[i]-muY)*(Y[i]-muY))
        proXY.append((X[i]-muX)*(Y[i]-muY))
    sigX=math.sqrt(sum(sqX)/n)
    sigY=math.sqrt(sum(sqY)/n)
    ans=sum(proXY)/(n*sigX*sigY)
    print(round(ans,3))
