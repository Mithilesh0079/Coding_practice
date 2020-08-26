void shiftdown(vector<Node*> &arr, int i, int n)
{
    if(i<n)
    {
        int l= 2*i+1;
        int min_index=i;
        if(l<n && arr[l]->data<arr[i]->data)
        min_index= l;
        
        int r= 2*i+2;
        if(r<n && arr[r]->data<arr[min_index]->data)
        min_index= r;
        
        if(min_index!= i)
        {
            swap(arr[i], arr[min_index]);
            shiftdown(arr, min_index, n);
        }
    }
}

Node * mergeKLists(Node *arr[], int N)
{
   vector<Node*> heap;
   for(int i=0; i<N; i++)
   {
       if(arr[i]!= NULL)
       heap.push_back(arr[i]); 
   }
   for(int i= N/2; i>=0; i--)
   shiftdown(heap, i, N);
   
   Node* ans = heap[0];
   Node* top=  heap[0];
     
   while(heap.size()>=1)
   {
       if(heap[0]->next!=NULL)
       {
           heap.push_back(heap[0]->next);
           swap(heap[0], heap[heap.size()-1]);
           heap.pop_back();
           shiftdown(heap, 0, heap.size());
       }
       else
       {
           swap(heap[0], heap[heap.size()-1]);
           heap.pop_back();
           if(heap.size()>=1)
           shiftdown(heap, 0, heap.size());
           else
               break;
       }
       top->next= heap[0];
       top= top->next;
   }
   top->next=NULL;
  return ans;
}
