# Fibonacci Recurrence Relation Implementation in C

This repository contains three different implementations of the Fibonacci recurrence relation F(n) = F(n-3) + F(n-2), with initial conditions F(0) = 0, F(1) = 1, and F(2) = 2.

## Development Environment

- Programming Language: C
- Compiler: C compiler.

## Compilation and Running

1. Open a terminal window.
2. Navigate to the directory containing the source code.
3. Compile the source code using the following command:
 
 gcc -o fibonacci fibo.c


 `fibonacci` in this case is  output executable name.

4. Run the compiled executable:


5. Follow the on-screen instructions to enter a value for `n`.

## Implementation Details

- `Implementation 1`: Recursive Approach
- Advantages: Simple but inefficient for larger `n`.
- Disadvantages: Exponential time complexity and high memory usage.

- `Implementation 2`: Memoization (Top-down Dynamic Programming)
- Advantages: Improved time complexity due to memoization.
- Disadvantages: Still relatively high memory usage.

- `Implementation 3`: Bottom-up Dynamic Programming (Iterative Approach)
- Advantages: Efficient both in time and space complexity.
- Disadvantages: May require a significant amount of memory for very large `n`.



