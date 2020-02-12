#ifndef BST__hpp
#define BST__hpp
#include<iostream>
#include"stack.hpp"
class node{
public:
	node *right;
	node *left;
	int value;
	int height = 0;
	node(int value){
		node::value = value;
	}
	class BST{
	public:
      BST(){

	  }
	  ~BST() {}
	 private: 
	  node *insert(node *root, int value){
		  if (root == nullptr){
			  node *p = new node(value);
			  p->right = nullptr;
			  p->left = nullptr;
			  root = p;
		  }else if(root->value > value){
	     	    //  Condition  for left
	             root->left = insert(root->left,value);
	     }else if(root->value < value){
	     	     // Condition  for right
		     root->right = insert(root->right,value);  
	     }
     return root;
     }
     int height(node *root){
          if(root == nullptr){
	          return 0;
	       }
          return root->height; 
        }
     int numberOfNode(node *root){
        static int count =0;
        if(root == nullptr){
           return count;
         }
	     numberOfNode(root->left);
	     count++;
         numberOfNode(root->right);
     return count;}
     void Delete_LeafNode(node *root){
                if(root == nullptr){
		             return;
		}else if(root->left == nullptr && root->right == nullptr){
		    
		
		}
     }
     void DeleteFirst(node *root){
   	 // need to Delete root and  adjust that node
     }
     node *root = nullptr;
     public:
          node* insertr(int value){
        	 root = insert(root, value);
             return root;
		  }
    public:		  
		  void inOrder(Node *root)
		  {
			  stack s;
			  while (1)
			  {
				  while (root)
				  {
					  s.push(root);
					  root = root->left;
				  }
				  if (s.isEmpaty())
				  {
					  break;
				  }
				  root = s.pop();
				  std::cout << root->value << "\t";
				  s.push(p->right);
				  root = root->right;
			  }
		  }
		  void preOrder(Node *root)
		  {
			  stack s;
			  while (1)
			  {
				  while (root != nullptr)
				  {
					  std::cout << root->value << "\t";
					  s.push(root);
					  root = root->left;
				  }
				  if (s.isEmpaty())
				  {

					  break;
				  }

				  root = s.pop();

				  s.push(root->right);
				  root = root->right;
			  }
		  }
		  void postOrder(Node *root)
		  {
			  stack s;
			  while (1)
			  {
				  while (root != nullptr)
				  {
					  s.push(root);
					  root = root->left;
				  }
				  if (s.Emptay())
				  {

					  break;
				  }

				  root = s.pop();
				  s.push(root->right);
				  root = root->right;
			  }
		  }
};
#endif//


