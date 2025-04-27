/*
Problem Statement

You will be given a binary tree as input in level order. You need to print the values 
of leaf nodes in descending order.



Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40
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


void  leaf_nodes_in_descending_order(Node* root,vector<int>&v)
{
    
    if(root == NULL)
        return ;
    if(root->left==NULL && root->right==NULL){
         v.push_back(root->value);
      return;
    }
    
    leaf_nodes_in_descending_order(root->left,v);
    leaf_nodes_in_descending_order(root->right,v);
    
   
    
    
}
int main() 
{
    Node* root =  input_tree();
  vector<int>v;
   leaf_nodes_in_descending_order(root,v);
    sort(v.begin(), v.end(),greater<int>());
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}