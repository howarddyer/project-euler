#import <stdio.h>
#include "../output.c"

/*
  Go through numbers 1 to 1000
  Sum those divisable by 3 or 5
*/

int solution();

int main () {
  output(solution);
}

int solution() {
  int i;
  int sum = 0;


  for (i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0 ) {
      sum += i;
    }
  }

  return sum;
}
