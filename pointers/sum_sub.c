#include <stdio.h>

int main(){
  int *p1 = 0x5DC;
  char *p2 = 0x5DC;

  printf("p1 = %d\np2 = %d\n", p1, p2);
  p1++; // int = 4byte
  p2++; // char = 1byte

  printf("p1 = %d\np2 = %d\n", p1, p2);
  return 0;
}
