#include <stdio.h>
#include <stdlib.h>
#define MAX 3
int queue[MAX];//queue[3]
int front = -1;
int rear = -1;
//array--> fr,x1,re,

//rear=rear+1 % MAX (3)
//front = front +1

//array -> _,_,_

//array -->fr/re,_,_
//array --> fr,re,_
//array --> fr,x2,re
//queue full --> re+1%MAX == fr
//deque 
//array --> _,fr,re
//enque
//array --> _fr,_,error
//array --> re,fr,_

//array --> _,re,fr
//array --> fr,re,x1
void enqueue(int value){
if ((rear+1)%MAX==front){
	printf("\nQueue is Full");
}

if (front==-1){
	rear=0;
	front=0;
}else{
	rear = (rear+1)%MAX;
	
}
	queue[rear]=value;
}

void dequeue(){
	if (front==-1){
		printf("\nQueue is Empty");
	}else{
	front=(front+1)%MAX;		
	
	}
return;	
}
void peek(){
	if (front==-1){
		printf("\nQueue is Empty");
	}else{

		printf("\nPeek Element is %d",queue[front]);
	}	
	return;
}

int main(){
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
peek();


	
return 0;	
}
