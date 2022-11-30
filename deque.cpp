#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int input)
    {
        data=input;
        next=NULL;
        prev=NULL;
        return;
    }
};
class DeQueues
{
    node* head;
    node* tail;
    public:
    DeQueues()
    {
        head=NULL;
        tail=NULL;
    }
    void push_back(int value)
    {
       node *temp= new node;
       temp->data= value;
       temp->next=NULL;
       temp->prev=NULL;
       if(head==NULL){
           head=temp;
           tail=temp;
       }
       tail->next=temp;
       tail=temp;
    }
    void push_front(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        temp->next=head;
        head=temp;
        
        
    }
    void pop_front()
    {
        if(head==NULL){
            cout<<"underflow";
        }
        head=head->next;
        
    }
    void pop_back()
    {
        if(head==NULL){
            cout<<"underflow";
        }
        tail=tail->prev;
    }
    void display_queue()
    {
        
    }
};
int main()
{
    DeQueues s;
    s.push_front(0);
    s.push_front(1);
    s.push_front(2);
    s.push_back(-1);
    s.display_queue();
    
}
