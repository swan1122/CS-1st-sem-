#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a,const void *b){
  return *(char*)a-*(char*)b;
}

int main(void) {
  srand(time(NULL));
  int size;
  printf("Enter the size of an array:\n");
  scanf("%d",&size);
  char letters[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
  char* arr = (char*)malloc((size+1)*sizeof(char));
  if (arr==NULL){
    printf("Memory not allocated");
  }
  else{
    printf("Before qsort:\n");
    for(int i=0;i<size;i++){
      arr[i]=letters[rand()%26];
    }
    arr[size]='\0';
    printf("%s\n",arr);
    printf("\nAfter qsort:\n");
    qsort(arr,size,sizeof(char),compare);
    printf("%s\n",arr);
    free(arr);
  }
  return 0;
}