/*
Problem Statement

You will be given a binary tree as input in level order.
 You need to tell if the binary tree is perfect or not. A binary tree is called 
 perfect if all leaf nodes are at the maximum depth of the tree, 
 and the tree is completely filled with no gaps.

 Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes = pow(2,get_height)-1;


Output Format

Output  if the tree is perfect,  otherwise.
Sample Input 0

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1 60 -1 -1 -1 -1 -1
Sample Output 1

NO
Sample Input 2

10 20 -1 -1 -1
Sample Output 2

NO
Sample Input 3

10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 3

YES
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


int get_height(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    int l = get_height(root->left);
    int r = get_height(root->right);
    return max(l,r)+1;
}
int count_Node(Node* root)
{
    if(root == NULL)
        return 0;
    int l = count_Node(root->left);
    int r = count_Node(root->right);
    return l+r+1;
}
int main() 
{
    Node* root =  input_tree();
  
  //int h= get_height(root);
    int c = count_Node(root);
    int Total_number_of_nodes = pow(2,get_height(root))-1;
    
    if(Total_number_of_nodes==c){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}