#include <stdio.h>
#include <math.h>

double fun1(double x){
  return x*x-2;
}

double fun2(double x){
  return x*x-5;
}

double fun3(double x){
  return x*x*x+x*x+x-4;
}

float bisection(double a,double b,double tolerance,double (*f)()){
  if (f(a)*f(b)>0){
    return 0;
  }
  while(fabs(b-a)>tolerance){
    double c=(a+b)/2;
    if (f(a)*f(c)<0){
      b=c;
    }
    else if(f(b)*f(c)<0){
      a=c;
    }
    printf("New interval [%f, %f], Root found at x = %f, f(x) = %f\n",a,b,c,f(c));
    if (fabs(f(c))<tolerance){
      break;
    }
  }
}

int main(void) {
  double a;
  double b;
  double t;
  printf("Enter interval endpoints:\n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  printf("Enter tolerance:\n");
  scanf("%lf",&t);
  printf("\nFind the root of f1(x) = x * x - 2.\n");
  bisection(a,b,t,*fun1);
  printf("\nFind the root of f2(x) = x * x - 5.\n");
  bisection(a,b,t,*fun2);
  printf("\nFind the root of f3(x) = x * x * x + x * x + x - 4.\n");
  bisection(a,b,t,fun3);
  return 0;
}