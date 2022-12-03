// WAP to perform binary search using recursion
#include<stdio.h>

void sort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid = (low+high)/2;
		sort(a, low, mid);
		sort(a, mid+1, high);
		merge(a, low, mid, high);
	}
}

void merge(int a[], int low, int mid, int high){
	int i=low;
	int j=mid+1;
	int k=low;
	int b[30];
	while(i<=mid && j<=high){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		} else {
			b[k++]=a[j++];
		}
	}
	if(i<mid){
		while(i<=mid){
			b[k++]=a[i++];
		}
	} else {
		while(j<=high){
			b[k++]=a[j++];
		}
	}
	for(int i=low;i<=high;i++){
		a[i] = b[i];
	}
}

int binarySearch(int arr[], int key, int low, int high){
	int mid;
	mid=(low+high)/2;
	if(low>high){
        return -1;
    }
	if(arr[mid]==key){
		return mid;
	} else if(arr[mid]<key){
		binarySearch(arr, key, mid+1, high);
	} else {
		binarySearch(arr, key, low, mid-1);
	}
	
}

int main(){
    int a[30];
    int size;
    int search, key;
    printf("Enter Size of array ");
    scanf("%d", &size);
    for(int i = 0;i<size;i++){
        printf("\nEnter Element ");
        scanf("%d", &a[i]);
    }
    sort(a, 0, size-1);
    printf("Enter Key to search ");
    scanf("%d", &key);
    search = binarySearch(a, key, 0, size-1);
    if(search!=-1){
    	printf("%d at index %d", key, search);
    } else{
        printf("%d not found\n ", key);
    }
    return 0;
}