class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
            
        if(head->next == NULL){
            return head;
        }
        
        ListNode *prev = head;
        ListNode *cur = head->next;
         head->next = NULL;
        while(cur->next){
            ListNode *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        cur->next = prev;
        return cur;
        
    }
};
