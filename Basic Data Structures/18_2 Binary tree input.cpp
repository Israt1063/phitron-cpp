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
        // 1.ber kore ana
        Node* f = q.front();
        q.pop();

        // 2.oi node niye kaj kora
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

        // 3. children push kora
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }
    return root;
}
void levelorder(Node* root)
{
    if(root==NULL)
    {
        cout<<"No Tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        // 1.ber kore ana
        Node* f = q.front();
        q.pop();

        // 2.oi node niye kaj kora
        cout<<f->value<<" ";

        // 3. children push kora
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }

}
int main() 
{
    Node* root =  input_tree();
    levelorder(root);

    return 0;
}