 int getCount(struct Node* head){
    
        //Code here
        int count =0;
        if(head==NULL){
            return 0;
        }
        Node * temp = head;
        while(temp!=NULL ){
            count++;
            temp = temp->next;
        }
        return count;
    
    }
