put = input()
alphabet ='abcdefghijklmnopqrstuvwxyz'

for i in alphabet:
  if i in put:
    print(put.index(i), end= ' ')
  else:
    print(-1, end =' ')