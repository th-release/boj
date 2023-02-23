def calc(arg):
  cnt = 0
  for number in range(arg, 0, -1):
    cnt += number
  return cnt


arr = list([])

while True:
  put = int(input())
  if put == 0:
    break
  arr.append(put)

for i in range(len(arr)):
  print(calc(arr[i]))
print()