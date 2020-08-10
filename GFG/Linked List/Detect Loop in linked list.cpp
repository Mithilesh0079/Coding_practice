bool detectLoop(Node* head)
{
    // your code here
    if(head->next==NULL)
    return false;
    
    if(head->next== head)
    return true;
    
    Node* slow= head;
    Node* fast= head;

    while(fast!= NULL && fast->next!= NULL)
    {
       fast= fast->next->next;
       slow= slow->next;
       if(fast==slow)
       return true;
    }
    return false;
}
