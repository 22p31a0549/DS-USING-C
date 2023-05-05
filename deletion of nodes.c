#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;	
};
typedef struct node NODE;
NODE *head = NULL;

void insert_at_head(NODE *nn){
	if(head == NULL){//there are no nodes
	  head=nn;
	}
	else{
		nn -> next=head;
		head=nn;
	}
} 
void insert_at_end(NODE*nn){
	if(head==NULL){
		head=nn;
	}
    else{
        NODE*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nn;//inserting new node at tail
    }
}
void delete_at_head(){
	if(head == NULL){
		printf("No Nodes\n");
		return;
	}
	printf("Deleted element is %d:\n",head ->data);
	head=head->next;
}
void display(){
	if(head==NULL){
		printf("No Nodes");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	while(1){
		int choice;
		printf("Enter\n 1.Insert at head\n2.Insert at end\n3.Delete at head\n4.Delete at end\n5.Display and anything else to exit");
		scanf("%d",&choice);
		if(choice==1){
		 // insert _at_head()
		 int val;
		 printf("Enter value of be inserted:");
		 scanf("%d",&val);
		 NODE nn=(NODE)malloc(sizeof(NODE));
		 nn ->data=val;
		 nn ->next=NULL;
		 insert_at_head(nn);
		 	
		}
		else if(choice==2){
		 //insert_at_end()	
		 int val;
		 printf("Enter value of be inserted:");
		 scanf("%d",&val);
		 NODE nn=(NODE)malloc(sizeof(NODE));
		 nn ->data=val;
		 nn ->next=NULL;
		 insert_at_end(nn);
		}
		else if(choice==3){
		  // delete _at_head()
		   delete_at_head();	
	   }
	   else if(choice==4){
	   	// delete _at_end()
	   }
	    else if(choice==5){
	   	//display
	   	display();
	   }
	   else{
	   	 printf("Thank you");
	   	 break; 
	   }
	   	
   }
}
