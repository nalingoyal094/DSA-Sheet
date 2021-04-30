// https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#

node *pre=NULL;
void populateNext(struct node* root)
{
if(root==NULL) return;
populateNext(root->left);
if(pre) pre->next=root;
pre=root;
populateNext(root->right);
}

// T.C : O(n)
// S.C : O(1)
