count = int(input())

for _ in range(count):
  r, s = input().split()
  r = int(r)
  s = str(s)
  text = ''
  for i in range(len(s)):
    text += r*s[i]
  print(text)