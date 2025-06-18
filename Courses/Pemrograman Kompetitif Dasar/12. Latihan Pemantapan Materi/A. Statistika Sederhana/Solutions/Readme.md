### Approach 1: Brute Force

#### Intuition

We want to find the smallest and largest numbers in a list. To do this, we look
at each number one by one and keep track of the smallest and largest values we
have seen so far.

#### Steps

1. Start by setting both `minVal` and `maxVal` to the first number in the list.
2. Go through each number in the list using a loop.
3. If the current number is smaller than `minVal`, update `minVal` to this
   number.
4. If the current number is bigger than `maxVal`, update `maxVal` to this
   number.

#### Implementation

```cpp
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
```

#### Example

Suppose the input is:

```
5
3 1 7 4 2
```

The output will be:

```
7 1
```

This means the largest number is 7 and the smallest is 1.

#### Complexity Analysis

- **Time complexity:** $O(N)$, because we look at each number once.
- **Space complexity:** $O(N)$, because we store all the numbers in a list.

### Approach 2: Using Built-in min and max Functions

#### Intuition

We want to find the smallest and largest numbers in a list, just like before. This time, instead of writing our own comparisons, we use the built-in `min` and `max` functions from C++. We also use the `climits` library to get the largest and smallest possible integer values to start with.

#### Steps

1. Set `minVal` to `INT_MAX` (the biggest possible integer) and `maxVal` to `INT_MIN` (the smallest possible integer).
2. Go through each number in the list using a loop.
3. For each number, update `maxVal` to be the bigger value between `maxVal` and the current number.
4. Update `minVal` to be the smaller value between `minVal` and the current number.

#### Implementation

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    void simpleStatistics(vector<int>& arr) {
        int maxVal = INT_MIN, minVal = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            maxVal = max(maxVal, arr[i]);
            minVal = min(minVal, arr[i]);
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
```

#### Example

Suppose the input is:

```
5
3 1 7 4 2
```

The output will be:

```
7 1
```

This means the largest number is 7 and the smallest is 1.

#### Complexity Analysis

- **Time complexity:** $O(N)$, because we look at each number once.
- **Space complexity:** $O(N)$, because we store all the numbers in a list.
