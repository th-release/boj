#include <iostream>

using namespace std;

int main() {
	int sum;
	cin >> sum;
	for (int i = 1; i <= 9; i++) {
		cout << sum << " * " << i << " = " << sum*i << std::endl;
	}
}
