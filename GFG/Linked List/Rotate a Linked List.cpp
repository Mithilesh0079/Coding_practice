Node* rotate(Node* head, int k)
{
    if(k==0)
    return head;

    Node* head1= head;
    Node* A= head;
    for(int i=1; i<k; i++)
    {
        head1= head1->next;
    }
    
    if(head1->next==NULL)
    return head;
    
    head= head1->next;
    
    Node* temp= head;
    
    head1->next= NULL;
    
    while(head->next!= NULL)
    {
        head= head->next;
    }
    
    head->next= A;
    
    return temp;
}
