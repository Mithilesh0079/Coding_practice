int getNthFromLast(Node *head, int n)
{
           
       Node* slow= head;
       Node* fast= head;
       
       int len=0;
       
       while(fast!= NULL&& fast->next!= NULL)
       {
           len++;
           slow= slow->next;
           fast=fast->next->next;
       }
     
       if(fast==NULL)
       len= len*2;

       else
       len= len*2+1;
       
       if(len<n)
       return -1;
                   
        for(int i=1; i<=len-n; i++)
        head= head->next;
    
       return head->data;
}
