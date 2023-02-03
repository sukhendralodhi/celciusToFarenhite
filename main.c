#include <stdio.h>

int main(void) {
  float c, f;
  printf("Enter the temprature: ");
  scanf("%f", &c);
  
// Formula	(C × 9/5) + 32

  f = (c * 9 / 5) + 32;

  printf("%.2f", f);
  return 0;
}