#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int size;
	int capacity;
	int *elements;
}Stack;


Stack* createStack(int maxElements){
	Stack *mStack;
	mStack = (Stack*)malloc(Stack);
	mStack->capacity = maxElements;
	mStack->size = 0;
	mStack->elements = (int*)malloc(maxElements*sizeof(int));
	return mStack;
}

void push(*Stack mStack, int data){
	if(mStack->size == mStack->capacity){
		printf("stack full!");
		return ;
	}
	else{
		mStack->size += 1;
		mStack->elements[mStack->size] = data;

	}
}
void pop(*Stack mStack){
	if(mStack->size == 0){
		printf("Stack empty");
		return ;
	}
	else{
		// mStack->elements[mStack->size]=NULL;
		mStack->size--; 
	}
}

int top(Stack *mStack){
	if(mStack->size == 0){
		printf("Stack empty");
		exit(0);
	}
	else{
		return mStack->elements[mStack->size-1];
	}
}


