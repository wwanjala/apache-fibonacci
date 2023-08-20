//Implementation 2: Memoization (Top-down Dynamic Programming)

#include <stdio.h>

#define MAX_N 1000
int memo[MAX_N];

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = fibonacci(n - 3) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < MAX_N; i++) {
        memo[i] = -1;
    }
    
    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}
