#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;	
	struct node* prev;
};
struct node* head=NULL;
struct node* tail=NULL;

void insert_begin(int ele);
void insert_end(int ele);
void insert_pos();
void printlist();

void delete_begin(){
	if(head==NULL){
		printf("\nList is Empty\n");
		
	}
	else{
		struct node*temp= (struct node*)malloc(sizeof(struct node));
		temp=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
	return;
}


void delete_end(){
	if(head==NULL){
		printf("\nList is Empty\n");
		
	}
	else{
		tail=tail->prev;
		tail->next=NULL;	
	}
	return;
}

void delete_pos(){
	int pos;
	printf("\nEnter the Input: ");
	scanf("%d",&pos);
	struct node* ptr = head;
	for(int i=0;i<pos-2;i++){
		ptr=ptr->next;
	}
	ptr->next->next->prev=ptr;
	ptr->next=ptr->next->next;
	
	
return;	
}






int main(){
insert_begin(45);
insert_begin(89);
insert_begin(34);
insert_end(23);
printlist();
delete_pos();
printf("\n\n");
printlist();

	return 0;
}

//void printlist(){
//	struct node *ptr = malloc(sizeof(struct node));
//	ptr=head;
//	while(ptr!=NULL){
//		printf("%d->",ptr->data);
//		ptr=ptr->next
//	}
//	printf("NULL");
//	
//	return;
//}
void printlist(){
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr=head;
	printf("\nstart to End\n");
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
	printf("\nEnd to start\n");
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp=tail;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("NULL");

	return;
}

void insert_begin(int ele){
 struct node* ptr = (struct node*)malloc(sizeof(struct node));
 ptr->data=ele;
 ptr->prev=NULL;
 if(head==NULL){
 	head=ptr;
 	tail=ptr;
 	ptr->next=NULL;
 }	
else{
	head->prev=ptr;
	ptr->next=head;
	head=ptr;	
}	
return;	
}


void insert_end(int ele){
 struct node* ptr = (struct node*)malloc(sizeof(struct node));
 ptr->data=ele;
 ptr->next=NULL;
 if(head==NULL){
 	head=ptr;
 	tail=ptr;
 	ptr->prev=NULL;
 }	
else{
	tail->next=ptr;
	ptr->prev=tail;
	tail=ptr;
}	
	return;
}

void insert_pos(){
int ele,pos;
printf("\nEnter the position: ");
scanf("%d",&pos);
printf("\nEnter the element: ");
scanf("%d",&ele);	
struct node* ptr = (struct node*)malloc(sizeof(struct node));
ptr->data=ele;
	struct node* temp =head;
	for(int i=0;i<pos-2;i++){
		temp=temp->next;
	}
	temp->next->prev=ptr;
	ptr->next=temp->next;
	temp->next=ptr;
	ptr->prev=temp;
	return;
}


