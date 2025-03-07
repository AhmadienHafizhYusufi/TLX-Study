#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrix(const vector<vector<int>>& matrix, int N, int M) {
	vector<vector<int>> rotatedMatrix(M, vector<int>(N));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			rotatedMatrix[j][N - 1 - i] = matrix[i][j];
		}
	}
	return rotatedMatrix;
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> matrix(N, vector<int>(M));

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> matrix[i][j];
		}
	}

	vector<vector<int>> rotatedMatrix = rotateMatrix(matrix, N, M);

	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << rotatedMatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}