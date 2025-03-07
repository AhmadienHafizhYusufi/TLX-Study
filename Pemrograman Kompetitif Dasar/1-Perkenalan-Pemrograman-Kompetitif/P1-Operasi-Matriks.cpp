#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotate90(const vector<vector<int>>& matrix, int N, int M) {
    vector<vector<int>> rotatedMatrix(M, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            rotatedMatrix[j][N - 1 - i] = matrix[i][j];
        }
    }
    return rotatedMatrix;
}

vector<vector<int>> rotate180(const vector<vector<int>>& matrix, int N, int M) {
    vector<vector<int>> rotatedMatrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            rotatedMatrix[N - 1 - i][M - 1 - j] = matrix[i][j];
        }
    }
    return rotatedMatrix;
}

vector<vector<int>> rotate270(const vector<vector<int>>& matrix, int N, int M) {
    vector<vector<int>> rotatedMatrix(M, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            rotatedMatrix[M - 1 - j][i] = matrix[i][j];
        }
    }
    return rotatedMatrix;
}

vector<vector<int>> reflectHorizontal(const vector<vector<int>>& matrix, int N, int M) {
    vector<vector<int>> reflectedMatrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            reflectedMatrix[N - 1 - i][j] = matrix[i][j];
        }
    }
    return reflectedMatrix;
}

vector<vector<int>> reflectVertical(const vector<vector<int>>& matrix, int N, int M) {
    vector<vector<int>> reflectedMatrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            reflectedMatrix[i][M - 1 - j] = matrix[i][j];
        }
    }
    return reflectedMatrix;
}

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<vector<int>> matrix(N, vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < X; ++i) {
        string operation;
        cin >> operation;

        if (operation == "_") {
            matrix = reflectHorizontal(matrix, N, M);
        }
        else if (operation == "|") {
            matrix = reflectVertical(matrix, N, M);
        }
        else if (operation == "90") {
            matrix = rotate90(matrix, N, M);
            swap(N, M);
        }
        else if (operation == "180") {
            matrix = rotate180(matrix, N, M);
        }
        else if (operation == "270") {
            matrix = rotate270(matrix, N, M);
            swap(N, M);
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
