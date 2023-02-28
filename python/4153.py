while True:
  put = list(map(int, input().split()))
  if put[0] == 0 and put[1] == 0 and put[2] == 0:
    break
  else:
    max_put = max(put)
    put.remove(max_put)
    if max_put ** 2 == (put[0] ** 2 + put[1] ** 2):
      print('right')
    else:
      print('wrong')