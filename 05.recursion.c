#include <stdio.h>

unsigned int Factorial(unsigned int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

// series Fibonacci    f(0) = 0,  f(1) = 1
unsigned int Fibonacci(unsigned int n) {
  if (n == 0 || n == 1) {
    return n;
  } else {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}

unsigned int FactorialByIteration(unsigned int n) {
  unsigned int result = 1;

  for (unsigned int i = n; i > 0; i--) {
    result *= i;
  }

  return result;
}

unsigned int FibonacciByIteration(unsigned int n) {
  if (n == 0 || n == 1) {
    return n;
  }
  unsigned int last = 0;
  unsigned int current = 1;

  for (unsigned int i = 0; i <= n - 2; i++) {
    unsigned int temp = current;
    current += last;
    last = temp;
  }

  return current;
}

int main(void) {
  printf("3! = %d\n", Factorial(3));
  printf("10! = %d\n", Factorial(10));

  printf("10! = %d\n", FactorialByIteration(5));

  printf("Fibonacci(10) = %d\n", Fibonacci(10));
  printf("Fibonacci(20) = %d\n", Fibonacci(20));
  printf("Fibonacci(30) = %d\n", Fibonacci(30));

  printf("Fibonacci(10) = %d\n", FibonacciByIteration(10));

  return 0;
}