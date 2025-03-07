#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    
    vector<vector<int>> arrA(n, vector<int>(m));
    vector<vector<int>> arrB(m, vector<int>(p));
    vector<vector<int>> arrC(n, vector<int>(p, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> arrB[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k = m; k++) {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << arrC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}