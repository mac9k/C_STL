
// O(n^2)
// Insert_Sort

void print_arr(int *, int);
void insert_sort(int *, int);

int main(){

    int arr[10]= {9,5,8,1,3,4,2,7,6,10};

    printf("before insert sorting\n");
    print_arr(arr, sizeof(arr)/sizeof(int));

    insert_sort(arr, sizeof(arr)/ sizeof(int));

    printf("after insert sorting\n");
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

void insert_sort(int *arr, int size){
    int i,j,temp;

    for(i=1; i<size-1; i++){
        if(arr[i-1] > arr[i]){
            temp = arr[i];

            for(j=i; j>0; j--){
                if(arr[j-1] < temp)break;   //when the value is small, loop stop
                arr[j] = arr[j-1];
            }
            arr[j] = temp;
            }
    }
}

