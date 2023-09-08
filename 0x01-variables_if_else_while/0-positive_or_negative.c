#include <stdio.h>

int main() {
  int n;
  n = rand() % RAND_MAX;

  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}

