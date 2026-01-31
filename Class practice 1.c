#include <stdio.h>
int main(){
  int n, key, i, flag=0;
  printf("Entry the size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the array: ");
  for(i=0; i<n; i++){
    scanf("%d", &key);
  }
  printf("Enter the key value: ");
  scanf("%d", &key);
  flag=0;
  for(i=0; i<n; i++){
    if (key==arr[i]){
      printf("Element is present at index %d", i);
      flag=1;
      break;
    }
    if(flag==0){
      printf("Element not found");
  }
    return 0;
}
