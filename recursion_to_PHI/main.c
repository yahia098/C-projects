#include <stdio.h>
#include <stdlib.h>
double F(double c) { return 1 + 1 / c; }
int main(int argc, char **argv) {
  double x = atof(argv[1]);
  int i;
  for (i = 1; i <= atoi(argv[2]); i++) {
    printf("%.15lf \n", F(x));
    x = F(x);
  }
  return 0;
}
