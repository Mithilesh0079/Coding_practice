void removeLoop(Node* head)
{
   Node* slow= head;
   Node* fast= head;
   Node*temp= head;
   while(fast!= NULL && fast->next!= NULL)
   {
       temp= slow;
       slow= slow->next;

       fast= fast->next->next;
       if(slow==fast)
       break;
   }
   
   if(fast==slow)
   {  
       if(fast==head)
       temp->next=NULL;
       else
       {
           fast= fast->next;
           head= head->next;
           while(fast!= head)
           {
               fast= fast->next;
               head= head->next;
               slow= slow->next;
           }
           slow->next= NULL;
       }
    }
}
