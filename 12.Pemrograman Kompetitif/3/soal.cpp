#include <iostream>

using namespace std;

int main() {
    int n, pola = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << pola % 10; // Agar pola digitnya 0-9 saja
            pola++;
        }
        cout << endl;
    }
    return 0;
}