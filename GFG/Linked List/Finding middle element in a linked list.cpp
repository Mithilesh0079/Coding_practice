int getMiddle(Node *head)
{
    if(head->next==NULL)
    return head->data;
    
   Node* slow= head;
   Node* fast= head;
   
   while(fast!= NULL && fast->next!= NULL)
   {
       slow= slow->next;
       fast= fast->next->next;
   }
   
   
   return slow->data;
}
