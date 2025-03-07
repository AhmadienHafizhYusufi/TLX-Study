#include <iostream>

using namespace std;

int A, B;

int Fungsi(int x, int K) {
    if (K == 1) {
        return abs(A * x + B);
    } else {
        return Fungsi(abs(A * x + B), K - 1);
    }
}

int main() {
    int K, x;
    cin >> A >> B >> K >> x;

    int hasil = Fungsi(x, K);
    cout << hasil << endl;
}