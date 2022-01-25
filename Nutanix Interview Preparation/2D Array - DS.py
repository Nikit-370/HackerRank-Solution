import sys
d = sys.stdin.read().splitlines()
d = [list(map(int,i.split())) for i in d]
maxval = None
for j in range(4):
    for i in range(4):
        add = d[j][i] + d[j][i+1] + d[j][i+2] + d[j+1][i+1] + d[j+2][i] + d[j+2][i+1] + d[j+2][i+2]
        if maxval ==None:
            maxval=add
        elif add>maxval:
            maxval=add
print(maxval)
