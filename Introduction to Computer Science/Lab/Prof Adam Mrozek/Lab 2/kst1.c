#include <stdio.h>
#include <stdlib.h>

unsigned int a, b, c;
unsigned int divc (unsigned int x);
unsigned int GCD (unsigned int, unsigned int);

int main (int argc, char ** argv){
if (argc != 2) return (-1);

a = atoi (argv[1]);
//b = atoi (argv[2]);
c = divc (a);
//c = GCD (a,b);

//printf("GCD(%u,%u) = %u\n ", a, b, c);
printf("%u\n", c);

return 0;
}

unsigned int divc (unsigned int x){
return x % 7;
}

unsigned int GCD (unsigned int x, unsigned int y){

if (y==0) return (x);
else GCD (y, x % y);

}
