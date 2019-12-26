#ifndef BST__hpp
#define BST__h
class BST{
	class node{
	public:
		node *right;
		node *left;
		int value;
		int height=0;
		node(int value){
		    node::value = value;
		}
	};
     BST(){}
     node *insert(node *root,int value){
	     if(root == nullptr){
	    	 node *p = node(value);
	    	 p->right = nullptr;
	    	 p->left = nullptr;
	    	 root = p;
	     }else if(root->value > value){
	     	    //  Condition  for left
	             root->left = insert(root->left,value);
	     }else if(root->value < value){
	     	     // Condition  for right
		     root->right = insert(root->right,va;ue);  
	     }
     return root;
     }
   int height(node *root){
          // Need to complete it     
   return }
   int numberOfNode(node *root){
       //Need to complete	
   }
   void Delete_LeafNode(node *root){
        // Need to complete It
   }
   void DeleteFirst(node *root){
   	// need to Delete root and  adjust that node
   }


};
#endif
