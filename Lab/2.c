#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);
  switch(a>b)
  {
    case 0:
      c=b;
      printf("'%d' is Maximum.\n", c);
      break;
    case 1:
      c = a;
      printf("'%d' is Maximum.\n", c);
    }
    switch(c%2)
      {
        case 0:
          printf("Maximum is Odd.\n");
          break;
        case 1:
          printf("Maximum is Even.\n");
          break;
      }
  return 0;
}