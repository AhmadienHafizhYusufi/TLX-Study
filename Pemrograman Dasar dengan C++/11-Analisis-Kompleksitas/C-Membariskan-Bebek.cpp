#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;

	int r = 1, c = N;
	int min_diff = N - 1;

	for (int i = 1; i <= sqrt(N); ++i) {
		if (N % 1 == 0) {
			int j = N / i;
			if (i <= j && (j - i) < min_diff) {
				r = i;
				c = j;
				min_diff = j - i;
			}
		}
	}

	cout << r << " " << c << endl;
	return 0;
}