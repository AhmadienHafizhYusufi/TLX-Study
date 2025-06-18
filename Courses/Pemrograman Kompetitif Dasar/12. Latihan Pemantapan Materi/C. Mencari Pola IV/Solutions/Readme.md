### Approach 1

#### Intuition

We want to print a pattern of numbers in a triangle shape. The first row has 1
number, the second row has 2 numbers, the third row has 3 numbers, and so on, up
to `n` rows. The numbers start from 0 and increase by 1 each time. If the number
reaches 10, it goes back to 0 (because we use `pattern % 10`).

#### Steps

1. Start with a variable `pattern = 0`.
2. Use a loop for each row from 1 to `n`.
3. Inside the row loop, use another loop to print numbers in that row (the
   number of columns is equal to the row number).
4. Print `pattern % 10` for each column, then increase `pattern` by 1.
5. After finishing a row, move to the next line.

#### Implementation

```cpp
#include <iostream>
using namespace std;

int n;

class Solution {
public:
    void patternIV(int n) {
        int pattern = 0;
        for (int i = 1; i <= n; i++) { // Loop for each row
            for (int j = 0; j < i; j++) { // Loop for each column in the row
                cout << pattern % 10;
                pattern++;
            }
            cout << endl; // Move to the next line after each row
        }
    }
};

int main() {
    cin >> n;
    Solution solution;
    solution.patternIV(n);
    return 0;
}
```

#### Example

If `n = 4`, the output will be:

```
0
12
345
6789
```

#### Complexity Analysis

- **Time complexity:** $O(N^2)$, because we use nested loops for rows and
  columns.
- **Space complexity:** $O(1)$, because we only use a few variables.
