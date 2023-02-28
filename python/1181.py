cnt = int(input())
str_list = []
for i in range(cnt):
  str_list.append(input())

str_list_set = list(set(str_list))
str_list_set.sort()
str_list_set.sort(key=len)

for i in str_list_set:
  print(i)