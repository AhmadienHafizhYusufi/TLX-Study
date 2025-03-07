#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int r_best = 1;
    int c_best = N;

    if (N >= 1 && N <= 3000) {
        for (int r = 1; r <= N; r++) {
            for (int c = r; c <= N; c++) {
                if (r * c == N) {
                    if ((c - r) < (c_best - r_best)) {
                        r_best = r;
                        c_best = c;
                    }
                }
            }
        }

        cout << r_best << " " << c_best << endl;
    }

    return 0;
}