#include <iostream>
using namespace std;
int main()
{
    int x =20;
    int *ptr;           //initialize
    ptr=&x;             //"&x" to store address of int x in ptr 
    cout<<ptr<<endl;    //address
    cout<<*ptr<<endl;   // value 
    
    int ** ptr1 ;       //pointer of pointer
    ptr1 = &ptr;        //"&ptr" to store address of ptr in ptr1
    cout<<ptr1<<endl;   //return address of ptr1  
    cout<<*ptr1<<endl;  //return address of ptr 
    cout<<**ptr1<<endl; //return value 
    
    int arr[]={2,4,5,68,5};
    int * ptr2 ;
    ptr2=arr;           //In array we can't write "&arr" only "arr" that's rule
    //or ptr2 =&arr[0]; //This is another way 
    cout<<ptr2<<endl;
    cout<<*ptr2;
    
    return 0;
}
