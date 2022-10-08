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
    
    printlist(head);
  
    return 0;
}
