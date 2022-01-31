class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        struct Node *temp = head_ref;
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->data);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        struct Node *head = NULL;
        struct Node *current = NULL;
        for(int i=0;i<vec.size();i++){
            if(head==NULL){
                temp = new Node(vec[i]);
                head = temp;
                current =head;
            }
            else{
                current->next = new Node(vec[i]);
                current=current->next;
            }
        }
        return head;
    }
    
};
