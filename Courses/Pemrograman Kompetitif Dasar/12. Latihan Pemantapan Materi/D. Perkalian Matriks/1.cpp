#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(M, vector<int>(P));
    vector<vector<int>> C(N, vector<int>(P, 0));

    // Membaca matriks A
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // Membaca matriks B
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> B[i][j];
        }
    }

    // Perkalian matriks A dan B untuk mendapatkan C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mencetak hasil matriks C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}