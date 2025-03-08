#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printBoard(const vector<vector<char>>& board) {
	for (const auto& row : board) {
		for (char cell : row) {
			cout << cell;
		}
		cout << endl;
	}
}

vector<vector<char>> collapseBoard(vector<vector<char>>& board, int R, int C) {
	vector<vector<char>> newBoard(R, vector<char>(C, '0'));
	int newRow = R - 1;

	for (int i = R - 1; i >= 0; --i) {
		bool isFull = true;
		for (int j = 0; j < C; ++j) {
			if (board[i][j] == '0') {
				isFull = false;
				break;
			}
		}
		if (!isFull) {
			newBoard[newRow--] = board[i];
		}
	}

	return newBoard;
}

int main() {
	int R, C;
	cin >> R >> C;

	vector<vector<char>> board(R, vector<char>(C));

	for (int i = 0; i < R; ++i) {
		for (int j = 0; j < C; ++j) {
			cin >> board[i][j];
		}
	}

	board = collapseBoard(board, R, C);

	printBoard(board);

	return 0;
}