/*
Problem Statement

You will be given a binary tree as input in level order. You need to print the outer 
side of the binary tree. See the sample input output for more clarifications. 
You need to print from the left most leaf node to right most leaf node.

Sample Input 0

10
20 30
40 70 -1 50
90 110 -1 -1 80 60
-1 -1 -1 -1 100 -1 -1 -1
-1 -1
Sample Output 0

90 40 20 10 30 50 60 
*/
#include <iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node*> q;
    if (root != NULL)
        q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    return root;
}
void get_left(Node* &root)
{
    if (root->left == NULL) {
        return;
    }
    get_left(root->left);
    
    if (root->left != NULL && root->right != NULL) {
        cout << root->left->value << " ";
    }
    else if(root->left == NULL && root->right != NULL)
        cout<<root->right->value << " ";
    else if (root->left != NULL && root->right == NULL) {
        cout << root->left->value << " ";
    }
}
void get_right(Node* &root)
{
    if (root->right == NULL) {
        return;
    }
        
    if (root->left != NULL && root->right != NULL) {
        cout << root->right->value << " ";
    }
    else if (root->right==NULL && root->left != NULL)
        cout<<root->left->value << " ";
    
    else if (root->left == NULL && root->right != NULL) {
        cout << root->right->value << " ";
    }
    get_right(root->right);
}
void print_outer_node(Node* root) {
    if (root== NULL) {
        return;
    }
    get_left(root);
    cout<<root->value<<" ";
    get_right(root);

}

int main() {
    Node* root = input_tree();
    print_outer_node(root); 

    return 0;
}