
// O(nlogn)
// Quick sort

#include <stdio.h>
//#include "array_stack.h"

enum boolean {FALSE, TRUE};
void QuickSort_nr(int *, int );
void QuickSort_r(int *, int );
void printArr(int *,int);

static int arr[] = {5,3,7,6,2,1,4};
int main(){
    printArr(arr, sizeof(arr)/sizeof(int));
    printf("\n");
    QuickSort_r(arr,sizeof(arr)/sizeof(int));
    printArr(arr, sizeof(arr)/sizeof(int));
    return 0;
}

void QuickSort_r(int *arr, int size){
    int pivot,temp;
    int i,j;
    if(size>1){
        pivot = arr[size-1];
        i=-1;
        j=size-1;
        while(TRUE){
            while(arr[++i]<pivot);
            while(arr[--j]>pivot);
            if(i>=j)break;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        temp=arr[i];
        arr[i]=arr[size-1];
        arr[size-1]=temp;
        QuickSort_r(arr,i);
        QuickSort_r(arr+i+1, size-i-1);

    }


}
void printArr(int *arr,int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

}
