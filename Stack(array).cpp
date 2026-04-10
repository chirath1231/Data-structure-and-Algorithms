#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int top =-1; //top++->0 stack[top] =ele
int stack[MAX];

bool isFull(){
	return top==MAX-1;	
}
bool isEmpty(){
	return top==-1;	
}





void push(int ele){

if(top==MAX-1){
	printf("\nStack is Full");
	return;
}else{
	top++;	
	stack[top]=ele;
	return;
}		
}

void peek(){
if(top==-1){
	printf("\nStack is Empty");
	return;
}else{	
printf("\nPeek Element is %d",stack[top]);	
	return;
}	
}

void pop(){
if(top==-1){
	printf("\nStack is Empty");
	return;
}else{	
	top--;
	return;
}		
	
}

//top==3 ->stack[3]=90
//top==2 -> top==3 stack[3] =100
//x=90
//x=
//stack[3]=90
//stack[3]=100



int main(){
push(56);
push(76);
push(100);
peek();
pop();
peek();
	
return 0;	
}
