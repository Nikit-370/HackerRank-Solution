n = 5
x = []
y = []
for i in range(n):
    xi, yi = map(int, input().split())
    x.append(xi)
    y.append(yi)
sum_x = 0
sum_y = 0
sum_x_sq = 0
sum_xy = 0
for i,j in zip(x,y):
    sum_x += i
    sum_y += j
    sum_x_sq += i**2
    sum_xy += i*j
mean_x = sum_x/n
mean_y = sum_y/n
b = (n*sum_xy - sum_x*sum_y)/(n*sum_x_sq - (sum_x**2))
a = mean_y - b*mean_x
y_hat = a + b*80
print(round(y_hat,3))
