x, y = map(int, input().split())

a, b = [], []

for row in range(x):
  row = list(map(int, input().split()))
  a.append(row)

for row in range(x):
  row = list(map(int, input().split()))
  b.append(row)

for row in range(x):
  for col in range(y):
    print(a[row][col] + b[row][col], end=" ")
  print() # \n