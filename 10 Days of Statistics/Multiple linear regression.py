from sklearn import linear_model

def solve(y, x, x_pred):
  lm = linear_model.LinearRegression()
  lm.fit(x, y)
  y_pred = lm.predict(x_pred)
  return y_pred

def main():
  m, n = map(int, input().strip().split())
  y = []; x = []; x_pred = []
  for _ in range(n):
    *features, y_val = map(float, input().strip().split())
    x.append(features)
    y.append(y_val)

  for _ in range(int(input())):
    features = list(map(float, input().strip().split()))
    x_pred.append(features)
  
  answer = solve(y, x, x_pred)
  for num in answer:
    print(round(num, 2))

if __name__ == "__main__":
  main()
