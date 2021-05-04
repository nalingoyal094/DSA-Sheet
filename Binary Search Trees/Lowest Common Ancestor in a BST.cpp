// https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1#

Node* LCA(Node *root, int n1, int n2)
{
   Node*a=root;
   Node*b=root;
   Node*lca;
   while(a->data!=n1 || b->data!=n2)
   {
       if(a==b)
       {
           lca=a;
       }
       
       if (a->data<n1)
       {
           a=a->right;
       }
       else if (a->data>n1)
       {
           a=a->left;
       }
       
       if (b->data<n2)
       {
           b=b->right;
       }
       else if (b->data>n2)
       {
           b=b->left;
       }
       
   }
   return lca;
}

// T.C = O(Height of the BST)
// S.C = O(1)




