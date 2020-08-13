struct node*reverseupto(node* head)
{
    if(head->next==NULL)
    return head;
    
    node* prev= head;
    head= head->next;
    node* next= head->next;
    prev->next= NULL;
    
    while(next!= NULL)
    {
        head->next= prev;
        prev= head;
        head= next;
        next= next->next;
    }
    head->next= prev;
    return head;
}
struct node *reverse (struct node *head, int k)
{ 
    if(k==1)
    return head;
    
    node* prev_start=head;
    int count=0;
    node* temp;
    
    while(head!=NULL && count<k){
        temp= head;
        head=head->next;
        count++;
    }
    temp->next=NULL;
    node* headr= reverseupto(prev_start);
    prev_start = head;
    node* result= headr;
    count =0;
    node* tempr= headr;
    
    while(head!=NULL && headr!= NULL)
    {
        temp=head;
        tempr= headr;
        head= head->next;
        headr= headr->next;
        count++;
    
        if(count==k)
        {
            temp->next=NULL;
            headr= reverseupto(prev_start);
            tempr->next= headr;
            prev_start= head;
            count =0;
        }
    }

    if(count!=0)
    {
        while(count<k)
        {
            tempr= headr;
            headr= headr->next;
            count++;
           }
            headr= reverseupto(prev_start);
            tempr->next= headr;
            prev_start= head;
            count=0;
    }
    return result;
}
