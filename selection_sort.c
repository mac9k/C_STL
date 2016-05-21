
// O(n^2)
// Selection_sort

void print_arr(int *, int);
void selection_sort(int *, int);

int main(){

    int arr[10]= {9,5,8,1,3,4,2,7,6,10};

    printf("before selection sorting\n");
    print_arr(arr, sizeof(arr)/sizeof(int));

    selection_sort(arr, sizeof(arr)/ sizeof(int));

    printf("after selection sorting\n");
    print_arr(arr, sizeof(arr)/sizeof(int));

    return 0;
}

void print_arr(int *arr, int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}

void selection_sort(int *arr, int size){
    int i,j,temp;

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

