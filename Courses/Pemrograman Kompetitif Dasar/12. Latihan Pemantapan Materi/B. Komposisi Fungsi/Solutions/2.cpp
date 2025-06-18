#include <iostream>
using namespace std;

int A, B, K, x;

class Solution {
    public:

    int composition(int K, int x){
        if (K == 1) {
            return abs(A * x + B);
        } else {
            return composition(K - 1,abs(A * x + B));
        }
    }
};

int main() {
    cin >> A >> B >> K >> x;
    Solution sol;
    cout << sol.composition(K, x) << endl;
    return 0;
}