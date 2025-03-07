#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        total += A[i];
    }

    for (int i = 0; i < n; i++) {
        cout << total - A[i] << endl;
    }

    return 0;
}