//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1#

int cnt=0;
int L,H;
void inorder(Node*root)
{
    if (root==NULL)
      return;
    inorder(root->left);
    
    if (root->data>=L && root->data<=H)
      cnt++;
    
    inorder(root->right);
    
    
}

int getCount(Node *root, int l, int h)
{
    cnt=0;
    L=l;H=h;
    
    inorder(root);
    return cnt;
  
}


// T.C=O(n)
// S.C=O(1)
