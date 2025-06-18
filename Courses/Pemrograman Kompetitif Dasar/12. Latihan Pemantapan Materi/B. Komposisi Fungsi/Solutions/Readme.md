### Approach 1: Iterative

#### Intuition

We are given a function $f(x) = |A \times x + B|$, and we need to apply this
function to a number $x$, $K$ times in a row. This means we take the result from
the previous step and use it as the input for the next step, repeating this
process $K$ times.

#### Steps

1. Start with the initial value $x$.
2. Repeat $K$ times:
   - Update $x$ to $|A \times x + B|$ (take the absolute value after multiplying
     and adding).
3. After $K$ repetitions, the final value of $x$ is the answer.

#### Implementation

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, K, x;
    cin >> A >> B >> K >> x;

    for (int i = 0; i < K; i++) {
        x = abs(A * x + B);
    }

    cout << x << endl;
    return 0;
}
```

#### Example

Suppose $A = 2$, $B = 3$, $K = 2$, and $x = 1$:

- First step: $x = |2 \times 1 + 3| = |2 + 3| = 5$
- Second step: $x = |2 \times 5 + 3| = |10 + 3| = 13$

So, the output is `13`.

#### Complexity Analysis

- **Time Complexity:** $O(K)$, because we repeat the process $K$ times.
- **Space Complexity:** $O(1)$, because we only use a few variables.

### Approach 2: Recursive

#### Intuition

We can solve this problem recursively by defining a function that applies $f(x) = |A \times x + B|$ and calls itself $K$ times, each time passing the result as the new input. The recursion continues until $K$ reaches 0.

#### Steps

1. Define a recursive function that takes the current value of $K$ and $x$.
2. If $K$ is 0, return $x$ (base case).
3. Otherwise, compute $|A \times x + B|$ and call the function again with $K-1$ and the new $x$.

#### Implementation

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int A, B;

int composition(int K, int x) {
    if (K == 0) {
        return x;
    }
    return composition(K - 1, abs(A * x + B));
}

int main() {
    int K, x;
    cin >> A >> B >> K >> x;
    cout << composition(K, x) << endl;
    return 0;
}
```

#### Example

Suppose $A = 2$, $B = 3$, $K = 2$, and $x = 1$:

- First call: $composition(2, 1)$
- Compute $|2 \times 1 + 3| = 5$, call $composition(1, 5)$
- Compute $|2 \times 5 + 3| = 13$, call $composition(0, 13)$
- Base case reached, return $13$

So, the output is `13`.

#### Complexity Analysis

- **Time Complexity:** $O(K)$, as the recursion depth is $K$.
- **Space Complexity:** $O(K)$, due to the recursion stack.
