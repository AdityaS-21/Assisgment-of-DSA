#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *mergeTwoLists(struct node *head1,struct node *head2) {
	if (head1==NULL)
		return head2;
	if (head2==NULL)
		return list1;
	struct node *new_node= new struct node(-1);
	struct node *head= new_node;
	while (head1 && head2){
		if (head1->val <head2->val){
			head->next= head1;
			head1= head1->next;
			head= head->next;
            }
        else{
            head->next= head2;
			head2= head2->next;
			head= head->next;
            }
	}
	while (head1){
		head->next= head1;
		head1= head1->next;
		head= head->next;
    }
    while (head2){
        head->next= head2
		head2= head2->next;
		head= head->next;
    }
    new_node= new_node->next;
    return new_head;
}
//Finding the Kth Node
struct node* gettheknode(struct node *head,int k){
	if(head==NULL || k<1){
		return;
	}
	struct node *temp=head;
	for(int i=1;i<=k;i++){
		temp=temp->next;
	}
	return temp;
}
//sorting the Linkedlist
void sort(node *head,int n){
	if(head==NULL || head->next==NULL)
		return;
	int mid=n/2;
    struct node *temp=gettheknode(head,mid);
	struct node *head2=temp->next;
	temp->next=NULL;
	head=sort(head,mid);
	head2=sort(head2,n-mid);
	return mergeTwoLists(head,head2);
	
}
//Printing the Linkedlist
void printlinkedlist(node* head){
	struct node *ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
//Creating a node of Linkedlist
struct node* createnode(int value){
		struct node *newnode=new struct node();
	    newnode->data=value;
	    newnode->next=NULL; 
	    return newnode;
}
//Inserting data in the Linkedlist
void insert(int n){ 
    while(n){ 
        int value;                                
		cout<<"Data u want u enter in linkedlist : ";
        cin>>value;		
		    if(head==NULL){
			    head=createnode(value);
			    tail=head;
		    }
		    else{
		        tail->next=createnode(value);
		        tail=tail->next; 
		    }
		    n--; 
	}
	
}
int main(){
	int n,start,end;                                       //n is number of node we want to take
	cout<<"enter the size of linkedlist : ";
	cin>>n;
	insert(n);
	printlinkedlist(head);
	cout<<"enter the interval which u want to sort :"; 
	cin>>start>>end;
	sort(head,n);
	return 0;
}
