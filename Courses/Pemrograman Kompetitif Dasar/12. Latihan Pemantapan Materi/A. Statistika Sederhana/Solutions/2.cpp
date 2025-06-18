#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
    public:
    void simpleStatistics(vector<int>& arr) {
        int maxVal = INT_MIN, minVal = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            maxVal = max(maxVal, arr[i]);
            minVal = min(minVal, arr[i]);
        }
        cout << maxVal << " " << minVal;
    }
};

int main() {
    int num;
    cin >> num;
    vector<int> arrA(num);
    for (int i = 0; i < num; i++) {
        cin >> arrA[i];
    }
    
    Solution sol;
    sol.simpleStatistics(arrA);
    return 0;
}