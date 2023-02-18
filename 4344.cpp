#include <iostream>
#include <vector>
using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        int N;
        cin >> N;

        vector<int> scores(N);
        int sum = 0;

        for (int i = 0; i < N; i++) {
            cin >> scores[i];
            sum += scores[i];
        }

        double avg = (double)sum / N;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] > avg) {
                cnt++;
            }
        }
        printf("%.3f%%\n", (double)cnt / N * 100);
    }

    return 0;
}
