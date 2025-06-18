#include <iostream>
using namespace std;

int A, B, K, x;

class Solution {
    public:
    int composition(int K, int x){
        int result = x;
        for (int i = 0; i < K; i++) {
            result = abs(A * result + B);
        }
        return result;
    }
};

int main() {
    cin >> A >> B >> K >> x;
    Solution sol;
    cout << sol.composition(K, x) << endl;
    return 0;
}