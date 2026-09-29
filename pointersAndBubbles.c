#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

void printValues(int* values){
 printf("[");
 for (int index = 0; index < MAX; index++){
  int temp = values[index];
  printf("%d ", temp);
 }
 printf("] \n");
} // end printValues

void swap(int* a, int* b){
 int temp = *a;
 *a = *b;
 *b = temp;
} // end swap

void sort(int* values){
 int i = 0;
 int j = 0;
 for (i = 0; i < (MAX - 1); i++){
  for (j = 0; j < (MAX - 1); j++){
   if (values[j] > values[j + 1]){
    swap(&values[j], &values[j + 1]);
    printValues(values);
   } // end if
  } //end 2nd for
 } // end 1st for
} // end sort
