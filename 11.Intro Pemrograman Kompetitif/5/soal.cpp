#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long c_best = 1, r_best = N;

    for (long long c = 1; c <= sqrt(N); c++) {
        if (N % c == 0) {
            long long r = N / c;
            if (r - c < r_best - c_best) {
                c_best = c;
                r_best = r;
            }
        }
    }

    cout << c_best << " " << r_best << endl;
}