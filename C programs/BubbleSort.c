/* C program for Bubble sort */
#include <stdio.h>
void swap(int *x, int *y){
int temp = *x;
*x = *y;
*y = temp;
}
/*bubble sort */
void bubbleSort(int arr[], int n){
int i, j;
for (i = 0; i < n-1; i++)
// Last i elements are already in place
for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
/* print an array */
void printArray(int arr[], int size){
int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);
}
int main(){
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr, n);
printf("Sorted array: ");
printArray(arr, n);
return 0;
}