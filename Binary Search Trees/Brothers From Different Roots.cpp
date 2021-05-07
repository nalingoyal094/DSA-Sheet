//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

set<int >s1={};
set<int >s2={};

void inorder1(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    inorder1(root->left);
    s1.insert(root->data);
    inorder1(root->right);
    
}

void inorder2(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    inorder2(root->left);
    s2.insert(root->data);
    inorder2(root->right);
    
}

int countPairs(Node* root1, Node* root2, int x)
{
   s1.clear();
   s2.clear();
    inorder1(root1);
    inorder2(root2);
     int cnt=0;
    for(auto ele: s1)
    {
        if (s2.find(x-ele)!=s2.end())
        {
            cnt++;
        }

    }
    
    return cnt;
}
