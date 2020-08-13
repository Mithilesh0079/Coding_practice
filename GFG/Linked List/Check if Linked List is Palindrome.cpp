// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
struct Node* reverse(Node* head)
{
    if(head==NULL||head->next==NULL)
    return head;
    
    Node* prev= head;
    Node* next= head->next->next;
    head= head->next;
    
    prev->next= NULL;
   
    while(next!= NULL) {
       head->next= prev;
       prev= head;
       head= next;
       next= next->next;
    }
    head->next= prev;
    return head;
}

bool isPalindrome(Node *head)
{
    Node* slow= head;
    Node* fast= head;
    Node*temp=slow;
    while(fast!= NULL && fast->next!= NULL){
        temp= slow;
        slow= slow->next;
        fast= fast->next->next;
    }
    Node* head2;
    if(fast==NULL)
    head2= temp->next;
    else 
    head2= slow->next;

    temp->next= NULL;
    
    Node* head1= reverse(head);
    while(head1!= NULL && head2!= NULL){
        if(head1->data!= head2->data)
        return false;
        
        head1= head1->next;
        head2= head2->next;
    }
    return true;
}
