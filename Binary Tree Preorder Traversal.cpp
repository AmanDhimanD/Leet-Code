
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> tree;
        vector<int> res;
        if(!root){
            return res;
        }
        tree.push(root);
        TreeNode *head = root;
        while(!tree.empty()){
            TreeNode *top = tree.top();
            res.push_back(top->val);
            tree.pop();
            if(top->right!=NULL){
                tree.push(top->right);
            }
            if(top->left!=NULL){
                tree.push(top->left);
            }
        }
        return res;
    }
};
