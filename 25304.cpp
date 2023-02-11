#include <iostream>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    int a, b;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        sum += a * b;
    }

    if (sum == X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
