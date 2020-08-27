Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    if(head_A==NULL)
    return head_B;
    if(head_B== NULL)
    return head_A;
    Node* first= head_A;
    Node* second= head_B;
    Node* head= new Node(1);
    Node* dummy= head;
    
    while(first && second) {
        if(first->data<second->data){
            head->next= first;
            first= first->next;
            head= head->next;
        }
        else{
            head->next= second;
            second= second->next;
            head= head->next;
        }
    }
    if(first==NULL)
    head->next= second;
    else
    head->next= first;
    return dummy->next;
}  
