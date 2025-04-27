/*
You will be given a binary tree as input in level order. Also you will be given a level X.
 You need to print all the node's values in that level from left to right. Assume that
 level starts from 0.
 Output Format

Output all the node's values in level .
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
0
Sample Output 0

10
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

void printNodesAtLevel(Node* root, int targetLevel) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }
    
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    
    bool levelExists = false;  
    
    while (!q.empty()) {
        pair<Node*, int> current = q.front();
        q.pop();
        
        Node* node = current.first;
        int level = current.second;
        
        if (level == targetLevel) {
            cout << node->value << " ";
            levelExists = true;
        }
        
        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }
    
   
    if (!levelExists) {
        cout << "Invalid" << endl;
    } else {
        cout << endl;
    }
}

int main() {
    Node* root = input_tree();
    
    int level;
    cin >> level;  
    
    printNodesAtLevel(root, level);
    
    return 0;
}