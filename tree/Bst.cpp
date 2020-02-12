
#include<iostream>
using namespace std;
class node{
public:
	node *right;
	node *left;
	int value;
	int height = 0;
	node(int value){
		node::value = value;
	}
};
	class BST{
	public: 
	  node *insert(node *root, int value){
		  if (root == nullptr){
			  node *p = new node(value);
			  p->right = nullptr;
			  p->left = nullptr;
			  root = p;
              //return p;
		  }else if(root->value >= value){
	     	    //  Condition  for left
	             root->left = insert(root->left,value);
	     }else if(root->value < value){
	     	     // Condition  for right
		     root->right = insert(root->right,value);  
	     }
     
     root->height =  height(root)+1;
     return root;
     }
     
     void inorder(node *root){
        if(root==nullptr) return;  
         inorder(root->left);
         cout << root->value;
         inorder(root->right);
     }
     int max(int x,int y){return x >= y ? x : y;}
     int height(node *root){
          if(root == nullptr){
	          return 1;
	       }
           return root->height;
        }
	};
	int main(int argc, char const *argv[]){
	node *root = nullptr;
	BST obj;
	int num = 0,c = 0;
	cin >> num; 
	int i = 0;
	while(i < num){
	  cin >> c;
	  root = obj.insert(root,c);
	i++;
    }
	//obj.inorder(root);
    cout << obj.max(obj.height(root->left), obj.height(root->right));
    return 0;
    }
