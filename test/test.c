#include <stdio.h>

void func10(int x);

int main()
{
  int a = 1, b = 2, c = 3;
  func10(a);
  func10(b);
  func10(c);

  return 0;
}

void func10(int x) 
{
  x = x * 10;
  printf("함수를 통한 결과값은 %d입니다.\n", x);
}