#import <stdio.h>
#import <time.h>

int output ( int (*f) ) {

  int t,
      repeat = 10;
  double timespent;

  for (t = 0; t < repeat; t++) {

    clock_t begin = clock();

    solution();

    clock_t end = clock();

    double thistimespent = (double)(end - begin) / CLOCKS_PER_SEC;
    timespent += thistimespent;

  }

  timespent /= repeat;

  printf("Answer = %d\n", solution());
  printf("Time spent = %f\n", timespent);

}
