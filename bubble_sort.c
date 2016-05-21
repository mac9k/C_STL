
// O(n^2)
// Bubble Sort

void print_arr(int *, int);
void bubble_sort(int *, int);

int main(){

    int arr[10]= {9,5,8,1,3,4,2,7,6,10};

    printf("before bubble sorting\n");
    print_arr(arr, sizeof(arr)/sizeof(int));

    bubble_sort(arr, sizeof(arr)/ sizeof(int));

    printf("after bubble sorting\n");
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

void bubble_sort(int *arr, int size){
    int i,j,temp;

    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
