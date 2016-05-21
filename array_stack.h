
#ifndef _ARRAY_STACK_H_
#define _ARRAY_STATCK_H_

static int index,top;
static int *stack;

void Init(int size){
    if(size<=0)return ;
    stack = (int *)malloc( size * sizeof(int));
    if(stack == NULL)return;

    top = -1;
    index = size;
}

void Push(const int* num){
    if(top >= index-1)return;
    stack[++top] = num;
}

int Pop(){
    if(isEmpty())return;
    return stack[top--];
}

int GetTop(){
    if(isEmpty())return;
    return stack[top];
}

int isEmpty(){
    if( top == -1 )return 1;
    return 0;
}

int* getArr(){
    return *stack;
}


#endif // _ARRAY_STACK_H_
