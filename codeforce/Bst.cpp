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
	 bool isLeft = true;
	  node *insert(node *root, int value){
		  if (root == nullptr){
			  node *p = new node(value);
			  p->right = nullptr;
			  p->left = nullptr;
			  root = p;
              //return p;
		  }else if(isLeft){
	     	    //  Condition  for left
	             root->left = insert(root->left,value);
	             isLeft = false;
	     }else if(!isLeft){
	     	     // Condition  for right
		     root->right = insert(root->right,value);  
	     }
     
     return root;
     }
    public:
     int NumberOfELementToSwap(node *root){
         static int number = 0;
          if(root == nullptr){
              return 0;
          }
          if( ( (root->left != nullptr) && ( root ->left->value > root->value) ) || ( (root->right != nullptr) &&  (root ->right->value < root->value))  ){
                number++;
          }
             NumberOfELementToSwap(root->left);
             NumberOfELementToSwap(root->right);
            return number;
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
    cout << obj.NumberOfELementToSwap(root);
    //obj.inorder(root);
    //cout << obj.max(obj.height(root->left), obj.height(root->right));
    return 0;
    }
    /* Need to work Little bit More To  complte This Task */
