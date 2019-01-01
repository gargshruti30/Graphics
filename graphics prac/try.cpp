#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class BinaryTreeNode{
public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
int distance(BinaryTreeNode* root, BinaryTreeNode* check)
{

    if (root == NULL)
      return 0;
    int dist = 0;
    if ((root== check) ||
        (dist = distance(root->left, check)) >0 ||
        (dist = distance(root->right, check)) >0)
        return dist + 1;

    return dist;
}
int main()
{
     BinaryTreeNode * root=new BinaryTreeNode(5);
     root->left=new BinaryTreeNode(4);
     root->left->left=new BinaryTreeNode(3);
     root->left->left->left=new BinaryTreeNode(2);
     BinaryTreeNode * check=root->left->left->left->left=new BinaryTreeNode(1);
     cout<<distance(root,check);
}
