#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
    public:
        vector<int> CloseFriend(vector<int>& X, vector<int>& Y, int D) {
            int minT = INT_MAX, maxT = INT_MIN;
            for (int i = 0; i < X.size(); i++) {
                for (int j = i + 1; j < X.size(); j++) {
                    int T = pow(abs(X[j] - X[i]), D) + pow(abs(Y[j] - Y[i]), D);
                    minT = min(minT, T);
                    maxT = max(maxT, T);
                }
            }
            return {minT, maxT};
        }
};

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }
    Solution sol;
    vector<int> result = sol.CloseFriend(X, Y, D);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}