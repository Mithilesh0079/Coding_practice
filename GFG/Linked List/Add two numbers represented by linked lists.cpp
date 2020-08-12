// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


*/
#include<vector>
int length(Node* head){
    int count=0;
    while(head!= NULL){
        head= head->next;
        count++;
    }
    return count;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
  int N= length(first);
  int M= length(second);
  
  Node* head1= first;
  Node* head2= second;
  
  vector<int> vm, vn;
  
  if(N>M){
      for(int i=0; i<N-M; i++)
          vm.push_back(0);
  }
  else{
      for(int i=0; i<M-N; i++)
          vn.push_back(0);
  }
  
  while(head1!= NULL) {
      vn.push_back(head1->data);
      head1=head1->next;
  }
  
  while(head2!= NULL){
      vm.push_back(head2->data);
      head2= head2->next;
  }
  
  int carry=0;
  for(int i= max(N,M)-1; i>=0; i--){
     if(vn[i]+vm[i]+carry>9){
         vn[i]= (vn[i]+vm[i]+carry)%10;
         carry=1;
     }
     else{
         vn[i]= vn[i]+ vm[i]+ carry;
         carry=0;
     }
  }
  Node* node=NULL;
  if(carry==1)
     node= new Node(1);

  if(N>M){
      if(carry==1)
          node->next= first;
      else
      node= first;
      
      int i=0;
      while(first!=NULL){
          first->data= vn[i];
          i++;
          first= first->next;
      }
     return node;
  }
  else {
      if(carry==1)
          node->next= second;
      else
      node= second;
      
      int i=0;
      while(second!=NULL){
          second->data= vn[i];
          i++;
          second= second->next;
      }
     return node;
  }
}
