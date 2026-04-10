#include <stdio.h>
#include <stdlib.h>

struct node{
	int ele;
	struct node* next;
};

struct node* top = NULL;

void push(int ele){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->ele=ele;
	
	if(top==NULL){
	
	ptr->next=NULL;
	
	top=ptr;		
	
	}	
	else{
	ptr->next=top;
	top=ptr;
	
	}
	
return;
}

void peek(){
	if(top==NULL){
printf("\n Stack is Empty");		
	
	}else{
		
	printf("\npeek Element is %d",top->ele);	
		
	}	
	return;
}

void pop(){
	if(top==NULL){
	printf("\n Stack is Empty");		
	
	}
	else{
	top=top->next;	
	}	
return;	
}




int main(){
push(56);
push(89);
push(890);
peek();
pop();
peek();
	
return 0;	
}
