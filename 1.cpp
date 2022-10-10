#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void pre_order(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void in_order(Node *root)
{
    if(root==NULL)
        return ;

    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}
void post_oder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    post_oder(root->left);
    post_oder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct Node *root=new Node(10);
    root->left=new Node(13);
    root->right=new Node(14);
    root->left->right=new Node(15);
    cout<<"Pre-order traversal = "<<endl;
    pre_order(root);
    cout<<endl;
    cout<<"In-order traversal = "<<endl;
    in_order(root);
    cout<<endl;
    cout<<"Post-order traversal = "<<endl;
    post_oder(root);
    cout<<endl;
    return 0;
}
