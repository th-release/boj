cnt = int(input())
arr = []
for i in range(cnt):
  arr.append(int(input()))

arr.sort()
for i in range(cnt):
  print(arr[i])