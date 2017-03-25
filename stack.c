#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int size;
	int capacity;
	int *elements;
}Stack;


Stack* createStack(int maxElements){
	Stack *mStack;
	mStack = (Stack*)malloc(sizeof(Stack));
	mStack->capacity = maxElements;
	mStack->size = 0;
	mStack->elements = (int*)malloc(maxElements*sizeof(int));
	return mStack;
}

void push(Stack *mStack, int data){
	if(mStack->size == mStack->capacity){
		printf("stack full! \n");
		return ;
	}
	else{
		mStack->size ++;
		mStack->elements[mStack->size-1] = data;
	}
}
void pop(Stack *mStack){
	if(mStack->size == 0){
		printf("Stack empty \n");
		return ;
	}
	else{
		mStack->size--; 
	}
}

int top(Stack *mStack){
	if(mStack->size == 0){
		printf("Stack empty \n");
		exit(0);
	}
	else{
		return mStack->elements[mStack->size-1];
	}
}

int main(void){
	Stack *mStack = createStack(8);
	push(mStack, 3);
	push(mStack, 2);
	push(mStack, 7);
	push(mStack, 5);
	push(mStack, 8);
	printf("size: %d \n", mStack->size);
	printf("%d \n",top(mStack));
	pop(mStack);
	printf("%d \n",top(mStack));
	pop(mStack);
	printf("%d \n",top(mStack));
	pop(mStack);
	printf("%d \n",top(mStack));
	pop(mStack);
	printf("%d \n",top(mStack));
	pop(mStack);
	printf("%d \n",top(mStack));

}
