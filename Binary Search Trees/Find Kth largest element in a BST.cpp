// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#

class Solution
{
    public:
    
    int k;
    int ans=0;
    
    void inorder(Node*root)
    {
       
        if (root==NULL)
         return;
        inorder(root->right);
        
        k--;
        if (k==0)
        {
            ans=root->data;
            return;
        }
        
        inorder(root->left);
        
    }
    
    
    
    int kthLargest(Node *root, int K)
    {
        k=K;
        inorder(root);
        
       return ans;
    }
};
