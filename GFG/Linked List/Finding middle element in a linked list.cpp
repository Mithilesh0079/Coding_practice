int getMiddle(Node *head)
{
   Node* temp= head;
   int len=0;
   while(head!= NULL)
   {
       head=head->next;
       len++;
   }
   if(len%2==0)
   len= len/2+1;
   else
   len= (len+1)/2;
   
   for(int i=1; i<len; i++)
   {
       temp= temp->next;
   }
   
   return temp->data;
}
