int getMiddle(Node *head)
    {
        if(head==NULL) return -1;
        
        // Your code here
        Node* slow = head;
        Node* fast = head->next;
       while(fast!=NULL){
           fast = fast->next;
           if(fast!=NULL){
               fast = fast->next;
           }
           slow = slow->next;
       }
       return int(slow->data);
    }
