//https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1#

class Solution
{
    public:
    
    int k;
    int ans=-1;
    
    void inorder(Node*root)
    {
       
        if (root==NULL)
         return;
        
        inorder(root->left);
        k--;
        if (k==0)
        {
            ans=root->data;
            return;
        }
        inorder(root->right);
        
        
    }
    
    
    
    int KthSmallestElement(Node *root, int K)
    {
        k=K;
        inorder(root);
        
       return ans;
    }
};
