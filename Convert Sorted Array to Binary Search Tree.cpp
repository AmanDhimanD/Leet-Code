/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=0,end=(nums.size())-1;
        int mid;
        return tree(start,end,mid,nums);
    }
    TreeNode* tree(int s,int e,int mid,vector<int>v){
        TreeNode* temp=NULL;
        if(s>e){
            return NULL;
        }
        mid = (s+e)/2;
        temp = new TreeNode(v[mid]);
        temp->left = tree(s,mid-1,mid,v);
        temp->right = tree(mid+1,e,mid,v);
        return temp;
    }
};
