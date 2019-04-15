#include <stdio.h>

int main() {
  int t,  // test cases
      n,  // soft drinks bought
      k;  // empty bottles to gain a full

  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    scanf("%d %d", &n, &k);

    printf("%d\n", (n % k) + (n / k));  // number of bottles that the customer
                                        // will have on the second day
  }

  return (0);
}