#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long total = 0;
    cin >> N;

    vector<int> arr(N);
    
    if (N >= 1 && N <= 100) {
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            total += arr[i];
        }

        for (int i = 0; i < N; i++) {
            cout << total - arr[i] << endl;
        }
    }
    
    return 0;
}