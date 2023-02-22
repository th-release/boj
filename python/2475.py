result = 0
for n in map(int, input().split()):
  result += n**2

print(result % 10)