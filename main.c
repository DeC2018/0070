#include <stdio.h>

int climbStairs(int n) {
    int f1 = 0;
    int f2 = 1;
    int f3 = 0;
    if (n <= 3) {
        return n;
    }
    for (int i = 0; i < n; i++) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}

int main() {
    int n1 = 2;
    printf("Input: n = %d\nOutput: %d\n", n1, climbStairs(n1));

    int n2 = 3;
    printf("Input: n = %d\nOutput: %d\n", n2, climbStairs(n2));

    return 0;
}
