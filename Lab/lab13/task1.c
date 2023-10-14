#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a,const void *b){
  if (*(double*)a > *(double*)b){
    return 1;
  }
  else if (*(double*)a < *(double*)b){
    return -1;
  }
  else{
    return 0;
  }
}

int main(void) {
  srand(time(NULL));
  int size;
  printf("Enter the size of an array:\n");
  scanf("%d",&size);
  double* arr = (double*)malloc(size*sizeof(double));
  if (arr==NULL){
    printf("Memory not allocated");
  }
  else{
    printf("Before qsort:\n");
    for(int i=0;i<size;i++){
      arr[i]=rand()%100;
      printf("%.2f ",arr[i]);
    }
    printf("\nAfter qsort:\n");
    qsort(arr,size,sizeof(double),compare);
    for(int i=0;i<size;i++){
      printf("%.2f ",arr[i]);
    }
    free(arr);
  }
  return 0;
}