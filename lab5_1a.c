// WAP to implement merge sort
#include<stdio.h>

void mergeSort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high){
    int i,j, k;
    i= low;
    j= mid+1;
    k = low;
    int b[20];
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }
    if(i>mid){
        while(j<=high){
            b[k++] = a[j++];
        }
    } else {
        while(i<=mid){
            b[k++] = a[i++];
        }
    }
    for(int i=low;i<=high;i++){
        a[i] = b[i];
    }
}

int main(){
    int a[20];
    int size;
    printf("Enter Size of array ");
    scanf("%d", &size);
    for(int i = 0;i<size;i++){
        printf("\nEnter Element ");
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, size-1);
    for(int i=0;i<size;i++){
        printf("%d | ", a[i]);
    }
    return 0;
}