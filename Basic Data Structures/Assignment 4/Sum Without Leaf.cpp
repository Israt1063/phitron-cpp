
/*
Problem Statement

You will be given a binary tree as input in level order. You need to output
 the sum of all node's values in that tree except the leaf nodes.

For example:
level order 10-20-30-40-50-60

The output for the above tree will be: 60

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the total sum of that tree except the leaf nodes.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60
*/

#include <iostream>
#include<algorithm>
using namespace std;
class Node{
    public: 
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value= value;
        this->left= NULL;
        this->right= NULL;
    }

};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root ;
    if(val == -1)
        root=NULL;
    else 
        root = new Node(val);
    queue<Node*>q;
     if(root!=NULL)
        q.push(root);
     while(!q.empty())
    {
        
        Node* f = q.front();
        q.pop();

       
        int l,r;
        cin>>l>>r;
        Node* myleft, *myright;
        if(l==-1) 
            myleft=NULL;
        else
             myleft = new Node(l);
        if(r==-1)
             myright=NULL;
        else 
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

       
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }
    return root;
}
int   sum_without_leaf(Node* root)
{
    
    if(root==NULL)
        return 0;
    
    if(root->left==NULL && root->right==NULL)
        return 0;
    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);
    return root->value+l+r;
}
  
int main() 
{
    Node* root =  input_tree();
    cout<<sum_without_leaf(root)<<endl;

    return 0;
}
