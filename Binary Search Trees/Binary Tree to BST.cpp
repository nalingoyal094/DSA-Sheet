// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1#



class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
     vector<int >in;
     Node*R;
     void inorder(Node*root)
     {
         if (root==NULL)
          return;
         inorder(root->left);
         in.push_back(root->data);
         inorder(root->right);
     }
     
     int i=0;
     
     void inorder1(vector<int>in,int &i, Node* root)
     {
         if (root==NULL)
          return;
         inorder1(in,i,root->left);
         
         root->data=in[i];
         i++;
         
         inorder1(in,i,root->right);
         
         
     }
     
     
     
    Node *binaryTreeToBST (Node *root)
    {
       inorder(root);
       
       for (int i=0;i<in.size();i++)
       {
     //      cout<<in[i]<<endl;
       }
       sort(in.begin(),in.end());
       R=root;
       inorder1(in,i,R);
       
       return R;
        
        
        
    }
};
