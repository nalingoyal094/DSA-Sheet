//https://practice.geeksforgeeks.org/problems/check-for-bst/1#

class Solution
{
    public:
    bool isBST(Node* root) 
    {
        if (root==NULL)
        {
            return true;
        }
        
        if (root->left)
        {
            if (root->left->data>=root->data)
            {
                return false;
            }
           
        }
        if (root->right)
        {
            if (root->right->data<=root->data)
            {   
                return false;
            }
            
        }
        
        if ( root->left && root->left->right)
        {
            if (root->left->right->data>=root->data)
            {
                return false;
            }
           
        }
        
        if ( root->right && root->right->left)
        {
            if (root->right->left->data<=root->data)
            {
                return false;
            }
           
        }
        
        
        
        
        return (isBST(root->right) && isBST(root->left));
        
        
    }
};


//T.C =O(n) as there are n nodes
//S.C =O(1) as no extra space used




