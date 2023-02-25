a, b = map(str, input().split())

a_reverse = ''
b_reverse = ''

for i in a:
  a_reverse = i + a_reverse

for i in b:
  b_reverse = i + b_reverse

if int(a_reverse) > int(b_reverse):
  print(a_reverse)
else:
  print(b_reverse)