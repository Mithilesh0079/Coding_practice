Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    Node* A= head;
    while( head!=NULL && head->next!=NULL)
    {
        int a= head->data;
        head->data= head->next->data;
        head->next->data= a;
        
        head= head->next->next;
    }
    
    return A;
}
