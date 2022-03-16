#include <stdio.h>

int main(int argc, char const *argv[]) {
  int v = 0, *p1, *p2;
  char ****test;

  p1 = &v;
  p2 = p1;
  p1 = p2;

  printf("p1: %p, p2: %p, v: %p\n", p1, p2, &v);

  return 0;
}
