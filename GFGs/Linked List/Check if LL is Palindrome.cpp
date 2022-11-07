#include <vector>
class Solution{
    private:
        bool isPal(vector<int> ans){
            int n = ans.size();
            int s = 0;
            int e = n-1;
            while(s<=e){
                if(ans[s]!=ans[e]){
                    return 0;
                }
                s++ ; e--;
            }
            return 1;
        }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int>ans;
        Node * temp = head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        return isPal(ans);
    }
};
