#include <iostream>
using namespace std;

int main() {
  bool students[31] = {false};
  int n;
  for (int i = 0; i < 28; i++) {
    cin >> n;
    students[n] = true;
  }
  for (int i = 1; i <= 30; i++) {
      if (!students[i]) {
          cout << i << endl;
      }
  }

  return 0;
}
