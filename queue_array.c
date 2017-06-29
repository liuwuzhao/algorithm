#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

#define MAX_ELEMT (16)

typedef struct {
	unsigned short head;
	unsigned short tail;
	int arr[MAX_ELEMT];
	}Queue;
	
Queue Q;


bool Init_Queue(){
	Q.head = Q.tail = 0;
	return true;
}

bool IsEmpty(){
	if(Q.head == Q.tail) return true;
	else return false;
	}
	
bool IsFull(){
	if(Q.head == (Q.tail + 1) % MAX_ELEMT) return true;
	else return false;
	}

	
int EnQueue(int e){
	if(IsFull())
	{
		printf("Queue is full\n");
		return Q.tail;
	}
	Q.arr[Q.tail] = e;
	if(Q.tail == MAX_ELEMT -1)
		Q.tail = 0;
	else
		Q.tail = Q.tail + 1;
	
	return Q.tail;
}

int DeQueue(){
	int x = -1;
	
	if(IsEmpty())
	{
		printf("Queue is Empty\n");
		return x;
	}
	
	x = Q.arr[Q.head];
	if(Q.head == MAX_ELEMT - 1)
		Q.head = 0;
	else
		Q.head = Q.head + 1;
	return x;
}

void main()
{
	int i = 0;
	int j = 0;
	
	Init_Queue();
	for(i = 0; i < 20; i++){
		EnQueue(i);
	}
	for(i = 0; i < 20; i++){
		j = DeQueue();
		printf("[%d] ",j);
	}
	getchar();
}
