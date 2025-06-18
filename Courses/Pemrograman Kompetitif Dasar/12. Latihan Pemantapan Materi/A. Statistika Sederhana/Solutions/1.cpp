#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    void simpleStatistics(vector<int>& arr) {
        int minVal = arr[0], maxVal = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
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