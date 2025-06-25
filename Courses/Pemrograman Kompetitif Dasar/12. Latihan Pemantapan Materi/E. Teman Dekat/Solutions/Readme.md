### Approach 1

#### Intuition

We want to find the smallest and largest closeness values between all pairs of
students. The closeness between two students is calculated using the formula
$T_{i,j} = |X_j - X_i|^D + |Y_j - Y_i|^D$. Since the number of students is not
too large ($N \leq 1000$), we can compare all pairs directly.

#### Steps

1. Read $N$ (number of students) and $D$ (the exponent).
2. Read all pairs $(X_i, Y_i)$ for each student.
3. For every pair of students $(i, j)$ with $i < j$, calculate $T_{i,j}$.
4. Keep track of the minimum and maximum values of all $T_{i,j}$.
5. Output the minimum and maximum values.

#### Implementation

```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> X(N), Y(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    int minT = INT_MAX, maxT = INT_MIN;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dx = abs(X[j] - X[i]);
            int dy = abs(Y[j] - Y[i]);
            int T = pow(dx, D) + pow(dy, D);
            minT = min(minT, T);
            maxT = max(maxT, T);
        }
    }
    cout << minT << " " << maxT << endl;
    return 0;
}
```

#### Example

Suppose $N = 3$, $D = 2$, and the students' data is:

```
1 2
3 4
5 6
```

All pairs are calculated, and the smallest and largest closeness values are
found.

#### Complexity Analysis

- **Time Complexity:** $O(N^2)$, since all pairs of students are compared.
- **Space Complexity:** $O(N)$, only storing the coordinates of the students.
