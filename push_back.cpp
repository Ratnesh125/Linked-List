#include <iostream>

using namespace std;

    struct node{
        int data;
        node*next;
    };
    
    void printlist(node*n){
        while(n!=0){
            cout<<n->data<<endl;
            n = n->next;
        }
    };
    void push_front(node**head_ref,int newData){
        node*newNode= new node();       
        newNode->data = newData;
        newNode->next = *head_ref;
        *head_ref = newNode;
    };
    void push_back(node**head_ref,int newData){
        node*newNode= new node();       
        newNode->data = newData;
        newNode->next = NULL;
        
        node*last = *head_ref;
   
        if(*head_ref==NULL){
            *head_ref=newNode;
            return;
        }
        else{
            while(last->next != NULL){
                last=last->next;
            }
            last->next = newNode;
            return;
        }
    }
int main()
{
    node*head = new node();
    node*second = new node();
    node*third = new node();
    
    head->data= 5;
    head->next=second;
    
    second->data= 4;
    second->next=third;
    
    third->data= 3;
    third->next=NULL;
    
    push_front(&head,1);
    push_front(&head,8);
    push_front(&head,9);
    
    push_back(&head,6);
    
    printlist(head);
  
    return 0;
}
