//Implementation 3: Bottom-up Dynamic Programming (Iterative Approach)

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    int pr[n + 1];
    pr[0] = 0;
    pr[1] = 1;
    pr[2] = 2;
    
    for (int i = 3; i <= n; i++) {
        pr[i] = pr[i - 3] + pr[i - 2];
    }
    
    return pr[n];
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}
