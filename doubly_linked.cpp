#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    
    //constructor for creating a node in doubly linked list
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    void insertion_at_head(int d,Node*&head,Node*&tail){
        if(head==NULL){
            // new liked list created
            Node*temp=new Node(d);
            head=temp;
            tail=temp;
        }
        else{
            Node*temp=new Node(d);
            temp->next=head;
            head->prev=temp;
        }
    }

    void insertion_At_tail(int d,Node*&head,Node*&tail){
        if(head=NULL){
            Node*temp=new Node(d);
            tail=temp;
            head=temp;
        }
        else{
            Node*temp=new Node(d);
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
    }

    void insertion_at_position(int position,int d,Node*&head,Node*&tail){
        if(position==1){
            insertion_at_head(d,head,tail);
            return;
        }
        else{

            int cnt=1;
            Node*temp=head;
            while(cnt<position){
                temp=temp->next;
                cnt++;

            }
            Node*newNode=new Node(d);
            if(temp->next==NULL){
                insertion_At_tail(d,head,tail);
                return;
            }
            newNode->next=temp->next;
            newNode->prev=temp;
            temp->next->prev=newNode;
            temp->next=newNode;
        }
    }
};