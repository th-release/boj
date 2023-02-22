#include <iostream>

using namespace std;

int main() {
	int c;
	cin.tie(NULL);
	// sync_with_stdio(false);
	cin >> c;
	for (int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}
