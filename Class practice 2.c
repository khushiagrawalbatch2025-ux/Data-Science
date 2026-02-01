#include <stdio.h>

int main() {
  int n, i, j, x, arr[n];
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("\n Enter the values of array: ");
  for (x=0 ; x < n; x++){
    scanf("%d", &arr[x]);
  }
  for(i=0; i<n; i++){
    for(j=0 ; j<n-1; j++){
      if (arr[i] > arr[i+1]){
        int temp= arr[i];
        arr[i]= arr[i+1];
        arr[i+1]= temp;
      }
   }
}
for (i=0; i<=n-1; i++){
  printf("%d", arr[i]);
}
printf("\n");
return 0;
}


