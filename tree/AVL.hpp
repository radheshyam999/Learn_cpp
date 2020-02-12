#include<iostream>
#ifndef AVL_hpp
#define AVL_hpp
class Node{
  public:
    //int data;
     Node *R = nullptr;
     Node *L = nullptr;
     int data = 0;
     int height = 0;  
     Node(int data){
      this->data = data;
      height = 0;
     }
    ~Node(){

    }
};
class AVL{
   private:
     Node *insert(int num, Node *p){
        if(p == NULL){
            std::cout << "iam null \n";
            p = new Node(num);
            p->L = NULL;
            p->R = NULL;
        }
        else if (p->data > num){
            p->L = insert(num, p->L);
        }
        else if (p->data < num){
            p->R = insert(num, p->R);
        }

        //std::cout << "i am null \n";
        p->height = max(Height(p->L), Height(p->R)) + 1;
        int b = Blance(p);
        if (b > 1 && p->data > num){

            std::cout << "i am null LL\n";
            //LL problem
            return RightRotate(p);   
             }else if(b > 1 && p->R->data < num){
                 
                 p->L = LeftRotate(p->L);
                 //LR problem
                 std::cout << "i am null LR\n";

                 return RightRotate(p);
             }else if(b < -1&&p->R->data < num){
                //RR
                std::cout << "iam null RR\n";

                return LeftRotate(p);
             }
             else if(b < -1 && p->R->data > num){
                     //RL
                     std::cout << "i am null RL\n";

                     p->R = RightRotate(p);

                     return LeftRotate(p->L);
                     }
                     //std::cout << "iam null End \n";

                     return p;
    }
    Node *LeftRotate(Node *p){
        Node *b = p->R;
        Node *T2 = b->L;

        // rotate
        b->R = p;
        p->L = T2;
	  p->height = Height(p)+1;
	  b->height = Height(p)+1;
    return b;
    }
    Node *RightRotate(Node *p){
        Node *b = p->L;
        Node *T2 = b->R;

        // rotate
        b->R = p;
        //p->R = T2;
	 p->height = Height(p)+1;
	 b->height = Height(p)+1;
    return b;
    }
    inline int Blance(Node *p) { return !(p == nullptr) ? Height(p->L) - Height(p->R) : 0;}
    void Delete(Node *p){
    }
    inline int Height(Node *p) { return !(p == nullptr) ? p->height : 0; }
    inline int max(int n, int m) { return n > m ? n : m; }

Node *rpt = nullptr;
    public:
        void insert(int Value){
           rpt = insert(Value,rpt); 
       }
    
     void traverse(){
         //std::cout <<"Traversing" << "\n";
         inorder(rpt);  
      }
      void inorder(Node *root){
             if(root == nullptr){
                 std::cout << "\n";

                 return;}

          inorder(root->L);
          std::cout << root->data << "\t";
          inorder(root->R);
       }
};
#endif //AVL_hp
