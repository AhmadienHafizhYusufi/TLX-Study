#include <iostream>
using namespace std;

int n;

class Solution {
    public:
    void patternIV(int n) {
        int pattern = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                cout << pattern % 10;
                pattern++;
            }
            cout << endl;
        }
    }
};

int main() {
    cin >> n;
    Solution solution;
    solution.patternIV(n);
    return 0;
}