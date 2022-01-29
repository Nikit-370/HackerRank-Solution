n = int(input())
X = [float(k) for k in input().split()]
Y = [float(k) for k in input().split()]

X_sorted, Y_sorted = sorted(X), sorted(Y)
D = sum((X_sorted.index(x) - Y_sorted.index(y))**2 for x, y in zip(X, Y)) 
spearman_score = 1 - 6 * D / n / (n**2 - 1)
print(round(spearman_score, 3))
