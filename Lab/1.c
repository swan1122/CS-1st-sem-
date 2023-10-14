#include <stdio.h>

int main(void) {
  int a, b, d;
  char c;
  printf("Enter [number 1] [+ - * /] [number 2]\n");
  scanf ("%d %c %d", &a, &c, &b);

  switch(c)
  {
    case'+':
      d = a+b;
      printf("%d %c %d = %d\n", a, c, b, d);
      break;
    case '*':
      d = a*b;
      printf("%d %c %d = %d\n", a, c, b, d);
      break;
    case'-':
      d = a-b;
      printf("%d %c %d = %d\n", a, c, b, d);
      break;
    case'/':
      d = a/b;
      printf("%d %c %d = %d\n", a, c, b, d);
      break;
    default:
      printf("Invalid operator\n");
  }
  return 0;
}