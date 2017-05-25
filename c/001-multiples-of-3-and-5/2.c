#import <stdio.h>
#import <math.h>
#include "../output.c"

/*
  Get all numbers divisable by 3 or 5 using the triangular number formula — (d * 0.5) * (d + 1)
  Sum those divisable by 3 or 5
*/

int solution();
int divisableBy(int);

int main () {
  output(solution);
}

int solution() {
  int sum = 0;

  sum = divisableBy(3) + divisableBy(5) - divisableBy(15);

  return sum;

}

int divisableBy(int divider) {
  int target = 999,
      upper;

  upper = floor(target / divider);

  // Triangular number formula
  return divider * ( (upper * 0.5) * (upper + 1) );

}
