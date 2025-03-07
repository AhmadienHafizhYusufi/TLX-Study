#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int n, d;

    cin >> n >> d;

    vector<pair<int, int>> murid(n);

    for (int i = 0; i < n; i++) {
        cin >> murid[i].first >> murid[i].second;
    }

    int minD = numeric_limits<int>::max();
    int maxD = numeric_limits<int>::min();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = abs(murid[j].first - murid[i].first);
            int dy = abs(murid[j].second - murid[i].second);
            int distance = pow(dx, d) + pow(dy, d);

            minD = min(minD, d);
            maxD = max(maxD, d);
        }
    } 

    cout << minD << " " << maxD << endl;
    
    return 0;
}