#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

#define MAX_ELEMT (64)
typedef struct {
	int top;
	int arr[MAX_ELEMT];
	}Stack;

Stack S;

bool Init_Stack(){
	S.top = -1;
	return true;
}

bool IsEmpty(){
	if(S.top == -1) return true;
	else return false;
	}
	
int Push(int e){
	S.top++;
	S.arr[S.top] = e;
	return S.top;
}

int Pop(){
	if(IsEmpty())
		printf("stack overflow\n");
	S.top--;
	return S.arr[S.top+1];
}

void main(){
	int i = 0, j = 0;
	Init_Stack();
	for(i = 0; i < 32; i++){
		Push(i);
	}
	for(i = 0; i < 33; i++){
		j = Pop();
		printf("[%d] ",j);
	}
	getchar();
}
