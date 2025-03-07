#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long jumlah = 0;
    for (int i = 1; i <= N; i++) {
        long long x;
        cin >> x;
        jumlah += x;
        // cout << "saat i = " << i << ", jumlah sementara = " << jumlah << endl;
    }

    cout << jumlah << endl;
}