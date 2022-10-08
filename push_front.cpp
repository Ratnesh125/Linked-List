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
    
    printlist(head);
  
    return 0;
}
