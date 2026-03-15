#include <stdio.h>

// Function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
int h=left,i=left,j=mid+1;
	int temp[15];

	while(h<=mid && j<=right){
		if(arr[h]<=arr[j]){
			temp[i]=arr[h];
			h++;
		}else{
			temp[i]=arr[j];
			j++;
		}
		i++;
	}
	while(j<=right){
		temp[i]=arr[j];
		j++;
		i++;
	}
	while(h<=mid){
		temp[i]=arr[h];
		h++;
		i++;
	}
	
	for(i=left;i<=right;i++){
		arr[i]=temp[i];
	}
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {
	int mid;
  if(left<right){
	  mid=(left+right)/2;
	  mergeSort(arr,left,mid);
	  mergeSort(arr,mid+1,right);
	  merge(arr,left,mid,right);
  }
  
  
}

// Function to print an array
void printArray(int arr[], int size) {
int i;
	for(i=0;i<size;i++){
	printf("%d ", arr[i]);
}
	printf("\n");


}

int main() {
    int n;
    
    // Input the size of the array
    printf("");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the elements of the array
    printf("");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("");
    printArray(arr, n);

    // Sort the array using merge sort
    mergeSort(arr, 0, n - 1);
    
    // Print the sorted array
    printf("");
    printArray(arr, n);

    return 0;
}
