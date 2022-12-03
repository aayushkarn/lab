// WAP to implement quick sort 
#include<stdio.h>

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int low, int high){
    int p = a[low];
    int start = low;
    int end = high;

    while(start<end){
        
        while(a[start]<=p){
            start++;
        }
        while(a[end]>p){
            end--;
        }
        if(start<end){
            swap(&a[start], &a[end]);   
        }
    }
    swap(&a[low], &a[end]);
    return end;
}

void quickSort(int a[], int low, int high){
    int p;
    if(low<high){
        p = partition(a, low, high);
        quickSort(a, low, p-1);
        quickSort(a, p+1, high);
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
    for(int i=0;i<size;i++){
        printf("%d | ", a[i]);
    }
    printf("\n");
    quickSort(a, 0, size-1);
    for(int i=0;i<size;i++){
        printf("%d | ", a[i]);
    }
    return 0;
}