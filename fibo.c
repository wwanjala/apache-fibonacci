//1.Implementation 1 Recursive appproach

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return fibonacci(n - 3) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter  n: ");
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, fibonacci(n));
    return 0;
}




