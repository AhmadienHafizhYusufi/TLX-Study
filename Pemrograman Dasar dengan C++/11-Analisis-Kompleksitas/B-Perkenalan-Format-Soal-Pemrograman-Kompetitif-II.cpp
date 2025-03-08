#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, totalSum = 0;
	cin >> N;
	vector<int> A(N);

	for (int& element : A) {
		cin >> element;
		totalSum += element;
	}

	for (const int& element : A) {
		cout << totalSum - element << endl;
	}
}