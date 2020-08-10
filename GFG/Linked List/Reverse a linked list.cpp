struct Node* reverseList(struct Node *head)
{
    if(head->next==NULL)
    return head;
    
    Node* prev=head;
    head= head->next;
    Node* nxt= head->next;
    prev->next= NULL;
    
    while(nxt!= NULL)
    {
       head->next= prev;
       prev= head;
       head= nxt;
       nxt= nxt->next;
    }
    head->next= prev;
    
    return head ;
}
