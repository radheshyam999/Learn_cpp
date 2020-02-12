#include<iostream>
#include<string>
using namespace std;

class Node{

public:
    Node *left;
    Node *right;
    Node *middle;
    string value;
    Node(string value){
        Node::value  =   value;
        Node::left   =   nullptr;
        Node::right  =   nullptr;
        Node::middle =   nullptr;
    }
};

class Trie{
    public :
        Node *insert(Node *root,string value){
               if(root == nullptr){
                  root = new Node(value);
                   //cout << root->value;
                 }
        else if(root->value < value){
            cout << "right"<< "\n";
            root->right = insert(root->right, value);  
                   }
        else if (root->value > value){
            cout << "left"<< "\n";
            root->left = insert(root->left, value);
               }
               else if (root->value == value){
                   cout <<"middle"<<"\n";
                   root->middle = insert(root->middle, value);
               }
               
            return root;
        }

    
        void traverse(Node *root){
            if (root == nullptr){
                //cout <<"root is null" << "\n";
                return;
            }
            cout << root->value << "\t";
            traverse(root->left);
            traverse(root->middle);
            traverse(root->right);
        }
};

int main(int argc, char const *argv[]){
    Trie obj;
    int i = 0;
    string x = " ";
    Node *root = nullptr;
    
        
    obj.traverse(root);
    return 0;
}
