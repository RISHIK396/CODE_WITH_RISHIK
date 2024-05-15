#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            next=NULL;
            delete next;
        }
    }

    void InsertAtHead(Node*&head,Node*& tail,int d){
        if(head==NULL){
            // this is the first node
            cout<<"the new first node is being created "<<endl;
            Node*temp=new Node(d);
            head=temp;
            tail=temp;
        }
        else{
            Node*temp=new Node(d);
            // node is being inserted at the head
            temp->next=head;
            head=temp;
        }
    }

    void InsertAtTail(Node*&head,Node*&tail,int d){
        if(head==NULL){
            cout<<"the linked list is empty we are creating the first node: "<<endl;
            Node*temp=new Node(d);
            head=temp;
            tail=temp; 
        }
        else{
            // inserting at the tail 
            Node*temp=new Node(d);
            tail->next=temp;
            tail=temp;
            cout<<"the node is inserted at the tail sucessfully: "<<endl;
        }
    }

    void Insert(Node*&head,Node*&tail,int d,int position){
        if(position==1){
            // it means node is being inserted at head
            InsertAtHead(head,tail,d);
            return;
        }
        else{
            int cnt=1;
            Node*temp=head;
            while(cnt<position-1){
                temp=temp->next;
            }
            if(temp->next=NULL){
                InsertAtTail(head,tail,d);
                return;
            }
            Node*node1=new Node(d);
            node1->next=temp->next;
            temp->next=node1;
        }
    }
    void delete_node(Node*&head,Node*&tail,int position){
        if(position==1){
            // deleting the first element
            Node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            int cnt=1;
            Node*curr=head;
            Node*prev=NULL;
            while(cnt<position){
                prev=curr;
                curr=curr->next;
            }

            // deleting the last node
            if(curr->next==NULL){
                tail=prev;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }

    // printing the nodes
    void print(Node*head){
        while(head!=NULL){
            cout<<head->data<<endl;
            head=head->next;
        }
    }
};

int main(){
    
}