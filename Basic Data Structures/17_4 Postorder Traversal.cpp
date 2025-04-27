#include <iostream>
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
void postorder(Node* root)  //PostOrder : Left right root
{
    if(root==NULL)
        return;
    postorder(root->left); //left
    postorder(root->right);  //right
    cout<<root->value<<" ";  //root
}
int main() 
{
     Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);


    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    postorder(root);

    return 0;
}