#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * next;	
};
struct node * head = NULL;

void insert_begin(int ele);
void insert_pos();
void insert_end(int ele);
void printlist();

void del_begin(){
if(head==NULL){
	printf("List is Empty");
	return;
}		
else{
struct node * ptr = head;
	
head = head->next;		
free(ptr);
	return;	
	}
}

void del_end(){
if(head==NULL){
	printf("List is Empty");
	return;
}else{
	struct node * ptr = head;
	while(ptr->next->next!=NULL){
		ptr=ptr->next;
	}
	struct node * temp = ptr->next;
	ptr->next=NULL;
	free(temp);
}		
}

void del_pos(){
if(head==NULL){
	printf("List is Empty");
	return;
}else{
	int pos;
	printf("\nEnter the position: ");
	scanf("%d",&pos);
	struct node * ptr = head;
	
	for(int i =0;i<=pos-3;i++){
		ptr=ptr->next;
		
	}
	struct node * temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
	
	
return;	
	
}	
}

int main(){
insert_begin(7);
insert_begin(43);//43->7->NULL
insert_end(56);//43->7->56->NULL
insert_begin(67);
insert_begin(79);
insert_end(70);//43->7->56->70->NULL
printlist();
del_pos();
printf("\n");
printlist();



	return 0;
}

void insert_begin(int ele){
	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data=ele;
	if(head == NULL){
	head = ptr;
	ptr->next=NULL;	
	}
	else{
		ptr->next=head;
		head=ptr;
	}
return ;	
}

void insert_end(int ele){
	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data=ele;
	
	if(head == NULL){
	head = ptr;
	}
	else{
	struct node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;	
	}
	temp->next=ptr;
	}
		ptr->next=NULL;	

return ;	
}

void insert_pos(){
	int pos,ele;
	printf("\nEnter the position: ");
	scanf("%d",&pos);
	printf("\nEnter the element : ");
	scanf("%d",&ele);
	
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data=ele;
	struct node* temp = head;
	for(int i =0;i<pos-2;i++){
		temp = temp->next;
	}
	ptr->next=temp->next;
	temp->next=ptr;
	
		
	
	
}
void printlist(){
	struct node* ptr =head;
	while(ptr!=NULL){
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
	return;
}
