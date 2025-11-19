#include <stdio.h>
int partition(int arr[],int start,int end) {
	int pos=start;
	for(int i=start; i<=end; i++) {
		if(arr[i]<=arr[end]) {
			int temp=arr[i];
			arr[i]=arr[pos];
			arr[pos]=temp;
			pos++;
		}
	}
	return (pos-1);
}
void quicksort(int arr[],int start,int end) {
	if(start>=end) return;
	int pivot=partition(arr,start,end);
	quicksort(arr,start,pivot-1);
	quicksort(arr,pivot+1,end);
}
int main() {
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :\n");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("Sorted Array :\n");
	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}